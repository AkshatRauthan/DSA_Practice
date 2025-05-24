#include "bits/stdc++.h"
using namespace std;

// Finding all prime factors.
// GFG

vector<int> AllPrimeFactors(int n) {
    vector<int> temp(n+1,0);
    temp[0] = 1;
    temp[1] = 1;
    for (int i=2; i<=sqrt(n); i++){ // Filling Sieve for checking prime numbers for prime factorization
        for (int a=2; a*i <= n; a++) temp[a*i]++;
    }
    
    vector<int>v;
    for (int i=2; i<=n; i++){
        if (!(n%i) && !temp[i]) v.push_back(i);
    }
    return v;
}

int main(){
    cout<<"\nEnter the number :\n";
    int n;
    cin>>n;

    vector<int> v = AllPrimeFactors(n);

    cout<<"\nThe all prime factors of "<<n<<" are : \n";
    for (int ele:v) cout<<ele<<" ";

    cout<<"\n";

    return 0;
}