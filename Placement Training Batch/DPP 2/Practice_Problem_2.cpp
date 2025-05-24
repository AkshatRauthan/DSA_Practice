#include "iostream"
using namespace std;

// The Pattern for input 5 is :

//      *      ==> 2*n rows
//     ***     ==> 2*n-1 columns
//    *****    ==> Print start every time when j in between n-i and n+i
//   *******
//  *********  ==> Till this 1st half
//  *********  ==> From here rev. of 1st half
//   *******
//    *****    
//     ***
//      *

void pattern(int n){
    for (int i=1; i<=n; i++){ // 1st Half : 1 to n
        for (int j=1; j<=2*n-1; j++){
            if (n-i<j && j<n+i) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }

    for (int i=n; i>=1; i--){ // 2st Half : n to 1
        for (int j=1; j<=2*n-1; j++){
            if (n-i<j && j<n+i) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"\nEnter the value of n :\n";
    cin>>n;
    cout<<"\n";
    pattern(n);
    cout<<"\n";
    return 0;
}
