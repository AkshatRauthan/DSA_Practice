#include "bits/stdc++.h"
using namespace std;

// GFG: GCD of two numbers

// Approach 1:
int gcd1(int a, int b){
    if (a == 1 || b == 1) return 1;
    while (a != b){
        if (a>b) a -= b;
        if (b>a) b -= a;
    }
    return a;
}

// Approach 2:
int gcdIteratiive(int a, int b){
    if (!a) return b;
    if (a == 1 || b == 1) return 1;
    while (a){
        int temp = a;
        a = b%a;
        b = temp;
    }
    return b;
}
int gcdRecursive(int a, int b){
    if (!a) return b;
    return gcd(b%a, a);
}

int main(){
    int a,b;
    cout<<"\nEnter the two numbers : \n";
    cin>>a>>b;

    cout<<"\nThe GCD of "<<a<<" and "<<b<<" is : \n";
    cout<<gcdRecursive(a,b)<<"\n\n";
    return 0;
}