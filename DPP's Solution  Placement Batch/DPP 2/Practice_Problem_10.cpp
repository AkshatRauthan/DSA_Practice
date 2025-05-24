#include "iostream"
using namespace std;

// The pattern for n = 5 is :
//  *****
//  *   *
//  *   *
//  *   *
//  *****

void pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==1 || i==n || j==1 || j==n) cout<<"*";
            else cout<<" ";
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