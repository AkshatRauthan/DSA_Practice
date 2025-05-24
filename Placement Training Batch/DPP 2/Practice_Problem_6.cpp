#include "iostream"
using namespace std;

// The pattern for n = 4 is :

//  1             ==> Odd i:  Rev order
//  2 3           ==> Even i: Normal order
//  6 5 4         ==> Odd i:  Rev order 
// 10 9 8 7       ==> Even i: Normal order

void pattern(int n){
    int a=1;

    for (int i=1; i<=n; i++){
        if (i%2 == 0){ // Even i: Normal Order
            for (int j=1; j<=i; j++){
                cout<<a++<<" ";
            }
        } else { // Odd i: Reverse order
            int b = a+i-1;
            for (int j=1; j<=i; j++){
                cout<<b--<<" ";
            }
            a += i;
        }
        cout<<"\n";
    }
}

int main(){
    int n=0;
    cout<<"\nEnter the value of n :\n";
    cin>>n;
    cout<<"\n";
    pattern(n);
    cout<<"\n";
    return 0;
}