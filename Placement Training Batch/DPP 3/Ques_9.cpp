#include "bits/stdc++.h"
using namespace std;

// Finding all prime factors.
// GFG

vector<int> AllPrimeFactors(int n) {
    vector<int> temp(n+1,0);
    vector<int> ans;
    temp[0] = 1;
    temp[1] = 1;
    for (int i=2; i<=sqrt(n); i++){ // Filling Sieve for checking prime numbers for prime factorization
        if (temp[i]){
            continue;
        }
        if (!(n%i)) ans.push_back(i);
        for (int j=i*i; j<=n; j+=i) temp[j]++;
    }
    
    for (int i=sqrt(n)+1; i<=n; i++){
        if (!(n%i) && !temp[i]) ans.push_back(i);
    }
    return ans;
}

int main(){
    cout<<"\nEnter the number :\n";
    int n;
    cin>>n;

    vector<int> v = AllPrimeFactors(n);

    cout<<"\nThe prime factors of "<<n<<" are : \n";
    for (int ele:v) cout<<ele<<" ";

    cout<<"\n";

    return 0;
}