#include "iostream"
using namespace std;

// The pattern for n = 4 is :

//  1          
//  2*3        
//  4*5*6      
//  7*8*9*10
//  7*8*9*10
//  4*5*6
//  2*3
//  1

void pattern(int n){
    int a=1;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if (j==i) cout<<a++;   // No * for last element
            else cout<<a++<<"*";
        }
        cout<<"\n";
    }

    a -= n; // => a = 11 will reach here. 11 - 4 = 7
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            if (j==i) cout<<a++;
            else cout<<a++<<"*";
        }
        cout<<"\n";
        a -= 2*(i)-1;
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