#include <bits/stdc++.h>
using namespace std;

struct comparator{
public:
    bool operator()(const vector<int>& v1, const vector<int>& v2){
        return v1[1] - v1[0] < v2[1] - v2[0];
    }   
};

int maxRemoval(vector<int> &v, vector<vector<int>> &q){
    priority_queue<vector<int>, vector<vector<int>>, comparator> pq;
    for (int i=0; i<v.size() && !(v[i]); i++) if (i == v.size()-1) return 0;
    int ans = 0;

    for (auto v1 : q) pq.push(v1);

    while (!pq.empty()){
        vector<int> t = pq.top();
        bool flag = false;

        for (int i=t[0]; i<=t[1]; i++){
            if (v[i] != 0){
                v[i] -= 1;
                flag = true;
            }
        }
        
        if (flag) ans++;
        pq.pop();

        for (int i=0; i<v.size(); i++){
            if (v[i] != 0) break;
            if (i == v.size()-1) return q.size() - ans;
        }
    }

    for (int i=0; i<v.size(); i++){
        if (v[i] != 0) return -1;
        if (i == v.size()-1) return q.size() - ans;
    }
    return -1;
}

int main(){
    int n, m;
    cout<<"\nEnter the size of the array :\n";
    cin>>n;
    cout<<"\nEnter the size no of queries :\n";
    cin>>m;

    vector<int> v(n,-1);
    vector<vector<int>> q(m, vector<int>(2, -1));

    cout<<"\nEnter the elements of the array : \n";
    for (int i=0; i<n; i++) cin>>v[i];

    cout<<"\nEnter the queries array values : \n";
    for (int i=0; i<m; i++) cin>>q[i][0]>>q[i][1];

    int ans = maxRemoval(v, q);
    cout<<"\nThe maximun number of queries that can be removed are : \n"<<ans<<"\n\n";
    return 0;
}

// Push no of ones into queries array.