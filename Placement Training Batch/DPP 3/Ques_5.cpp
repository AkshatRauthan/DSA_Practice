#include "bits/stdtr1c++.h"
using namespace std;

// Power Of Numbers
// GFG

// Here in the question we have constraints such that n is always in between 1 and 10.
// here I have put it for Universal test cases.

vector<int> dp;

int power(int n, int pow){
    if (pow == 1) return n;
    if (dp[pow] != -1) return dp[pow];
    int ans = 1;
    int x = power(n, pow/2);
    ans = x * x;
    if (pow%2) ans *= n;
    return dp[pow] = ans;
}

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        int digit = num % 10;
        if (INT_MAX/10 < rev) return INT_MIN;
        if (INT_MAX - rev*10 - digit < 0) return INT_MIN;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int reverseExponentiation(int n) {
    int rev = reverse(n);
    dp.resize(rev+5, -1);
    return power(n, rev);
}

int main(){
    dp.clear();
    int n;
    cout<<"\nEnter the number :\n";
    cin>>n;

    cout<<"\nThe reverse exponentiation of "<<n<<" is : \n";
    cout<<reverseExponentiation(n)<<"\n\n";
    return 0;
}