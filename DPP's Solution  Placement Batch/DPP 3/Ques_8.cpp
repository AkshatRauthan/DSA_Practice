#include "bits/stdc++.h"
using namespace std;

bool isPrime(int n) {
    for (int i=2; i<=sqrt(n); i++) if (!(n%i)) return false;
    return true;
}

int main(){
    int n;
    cout<<"\nEnetr the number to check : \n";
    cin>>n;
    if (isPrime(n)) cout<<"\nYes, "<<n<<" is a prime number\n";
    else cout<<"\nNo, "<<n<<" is not a prime number\n";
    return 0;
}