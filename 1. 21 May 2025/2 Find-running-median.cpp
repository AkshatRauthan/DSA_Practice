#include <bits/stdc++.h>
using namespace std;

vector<double> runningMedian(vector<int> a){
    vector<double> v(a.size(), -1.0);

    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;

    for (int i=0; i<a.size(); i++){
        
        // Push
        if (max.empty() || max.top() >= a[i]) max.push(a[i]);
        else min.push(a[i]);

        // Balance
        if (max.size() > min.size()+1){
            min.push(max.top());
            max.pop();
        }
        else if (min.size() > max.size()+1){
            max.push(min.top());
            min.pop();
        }

        // Find Median
        if (min.size() == max.size()) v[i] = (min.top() + max.top())/2.0;
        else if (min.size() > max.size()) v[i] = min.top();
        else v[i] = max.top();
    }

    return v;
}

int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;

    vector<int> a(n, -1);
    cout<<"\nEnter the "<<n<<" elements :\n";
    for (int i=0; i<n; i++) cin>>a[i];

    vector<double> v = runningMedian(a);

    cout<<"\nThe running medians are :\n";
    for (double ele : v) cout<<ele<<"\n";
    cout<<"\n";
    return 0;
}