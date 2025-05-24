#include <bits/stdc++.h>
using namespace std;

void insertInMultiset(multiset<int> &min, multiset<int, greater<int>> &max, int ele){
    if (max.empty()|| ele <= *max.begin()) max.insert(ele);
    else min.insert(ele);
}

void deleteInMultiset(multiset<int> &min, multiset<int, greater<int>> &max, int ele){
    if (!max.empty() || ele <= *max.begin()) max.erase(max.find(ele));
    else min.erase(min.find(ele));
}

void balanceMultiset(multiset<int> &min, multiset<int, greater<int>> &max){
    if (min.size() > max.size() + 1){
        max.insert(*min.begin());
        min.erase(min.begin());
    }
    if (max.size() > min.size() + 1){
        min.insert(*max.begin());
        max.erase(max.begin());
    }
    return;
}

double findMedian(multiset<int> &min, multiset<int, greater<int>> &max){
    if (min.size() > max.size()) return *min.begin();
    if (max.size() > min.size()) return *max.begin();
    return (*min.begin() + *max.begin()) / 2.0;
}

int activityNotifications(vector<int> v, int d) {
    multiset<int> min;
    multiset<int, greater<int>> max;

    int ans = 0;

    for (int i=0; i<d; i++){
        insertInMultiset(min, max, v[i]);
        balanceMultiset(min, max);
    }

    for (int i=d; i<v.size(); i++){
        double median = findMedian(min, max);
        if (v[i]*1.0 >= median * 2.0) ans++;

        insertInMultiset(min, max, v[i]);
        balanceMultiset(min, max);
        deleteInMultiset(min, max, v[i-d]);
        balanceMultiset(min, max);
    }

    return ans;
}

int main(){
    int n, d;
    cout<<"\nEnter the size of the array :\n";
    cin>>n;
    cout<<"\nEnter the size of the window:\n";
    cin>>d;

    vector<int> v(n);
    cout<<"\nEnter the "<<n<<" elements of the array:\n";
    for (int i=0; i<n; i++) cin>>v[i];

    int ans = activityNotifications(v, d);
    cout<<"\nThe number of fraudlent notifications are : "<<ans<<"\n\n";

    return 0;
}