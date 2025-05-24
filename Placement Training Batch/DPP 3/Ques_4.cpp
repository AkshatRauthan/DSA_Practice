#include "bits/stdc++.h"
using namespace std;

// Trailing zeroes in factorial ==> We ccan do this for all numbers.

// GFG: 5134

// Approach 01
int trailingZeroes(int n) {
    int ans = 0;
    for (int i=5; i<=n; i*=5) ans += n/i;
    return ans;
}

// Approach 02 : same as above but in short.
int trailingZeroesOpt(int n) {
    int ans = 0;
    while (n){
        ans += (n/5);
        n /= 5;
    }
    return ans;
}

int main(){
    int n;
    cout<<"\nEnter the number :\n";
    cin>>n;

    cout<<"\nThe number of trailling zeroes in it are :\n";
    cout<<trailingZeroesOpt(n)<<"\n\n";
}