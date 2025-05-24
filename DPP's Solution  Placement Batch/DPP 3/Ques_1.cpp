#include "iostream"
using namespace std;

// Count Digits => GFG: 5716

// Return the no. of digits that complelely divides the number and are present in it.

int evenlyDivides(int n) {
    int ans = 0;
    for (int i=n; i; i/=10){
        if (!(i%10)) continue;
        if (!(n % (i%10))) ans++;
    }
    return ans;
}

int main(){
    int n;
    cout<<"\nEnter the value of n : \n";
    cin>>n;

    int ans = evenlyDivides(n);

    cout<<"\nThe required number is : \n"<<ans<<"\n";
    return 0;
}
