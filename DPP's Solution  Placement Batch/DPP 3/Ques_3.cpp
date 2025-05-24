#include "bits/stdc++.h"
using namespace std;

// Factorial of a number
// GFG: 5739

int factorial(int n) {
    if (!n || n==1) return 1;
    int ans = 2;
    for (int i=3; i<=n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"\nEnter the number : \n";
    cin>>n;
    cout<<"\nThe factorial of "<<n<<" is :\n";
    cout<<factorial(n)<<"\n\n";
    return 0;
}