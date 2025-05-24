#include "bits/stdc++.h"
using namespace std;

vector<int> sieveOfEratosthenes(int n) {
    // Write Your Code here
    vector<int> temp(n+1,0);
    temp[0] = 1;
    temp[1] = 1;
    for (int i=2; i<=sqrt(n); i++){ // Filling Sieve for checking prime numbers for prime factorization
        for (int a=2; a*i <= n; a++) temp[a*i]++;
    }
    
    vector<int> ans;
    for (int i=0; i<=n; i++){
        if (!temp[i]) ans.push_back(i);
    }
    return ans;
}

int main(){
    int n;
    cout<<"\nEnter the number upto which you want to find prime numbers : \n";
    cin>>n;
    vector<int> ans = sieveOfEratosthenes(n);

    cout<<"\nThe prime numbers are : \n";
    for (int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<"\n\n";
    return 0;
}