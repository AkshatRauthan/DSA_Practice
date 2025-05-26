#include "bits/stdc++.h"
using namespace std;

int findGCD(int a, int b){
    if (a == 1 || b == 1) return 1;
    if (!a) return b;
    return gcd(b%a, a);
}

int findLCM(int a, int b){
    int gcd = findGCD(min(a,b), max(a,b));
    return ((a * b) / gcd);
}

int main(){
    int a,b;
    cout<<"\nEnter the two numbers : \n";
    cin>>a>>b;

    int lcm = findLCM(a, b);
    cout<<"\n\nThe LCM of "<<a<<" and "<<b<<" is : "<<lcm;
    cout<<"\n\n";
    return 0;
}