#include "bits/stdc++.h"
#include "climits"
using namespace std;

// Palindrome Number
// Leetcode: 9

// Given an integer x, return true if x is a palindrome, and false otherwise.

// Here, upon reversal x can overflow in int.

// Solution: If a number is stored in int and its reverse overflows then teh number and its reverse can never be same.
// Therefore, it can't be a Palindrome.

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

bool isPalindrome(int n){
    if (n < 0) return false;
    int rev = reverse(n);
    if (rev == INT_MIN) return false;
    return n == rev;
}

int main(){
    int n;
    cout<<"\nEnter the number : ";
    cin>>n;
    
    if (isPalindrome(n)) cout<<"\nYes, "<<n<<" is a Palindrome.\n\n";
    else cout<<"\nNo, "<<n<<" is not a Palindrome.\n\n";
    return 0;
}