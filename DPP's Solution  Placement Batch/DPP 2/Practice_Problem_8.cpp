#include "bits/stdc++.h"
using namespace std;

// The pattern for n = 5 is
//  1 2 3 4 5 
//  11 12 13 14 15 
//  21 22 23 24 25 
//  16 17 18 19 20 
//  6 7 8 9 10 

// The pattern for n = 4 is
//  1 2 3 4 
//  9 10 11 12
//  13 14 15 16
//  5 6 7 8

void pattern(int n) {
    for (int i=0; i<=n/2; i++){
        if (!(n%2) && i == n/2) break;
        int j = 1+i*2*n;
        for (int a=0; a<n; a++){
            cout<<j++<<" ";
        }
        cout<<"\n";
    }

    int a;
    if (n%2) a = (n-2) * (n) + 1;
    else a = (n-1) * (n) + 1;

    for (int i=(n+1)/2; i<n; i++){
        string s = "";
        for (int j=a; j<a+n; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
        a -= 2 * n;
    }
}

int main() {
    int n = 0;
    cout << "\nEnter the value of n :\n";
    cin >> n;
    cout << "\n";
    pattern(n);
    cout << "\n";
    return 0;
}