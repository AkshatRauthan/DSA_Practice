#include "iostream"
using namespace std;

// The Pattern for input 5 is :

//    *****
//       * 
//      *    ==> star on (n-i+1)th column
//     *
//    *****

void printPattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==1 || i==n) cout<<"*"; // First and last row complete
            else if (j == n-i+1) cout<<"*";
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
    printPattern(n);
    cout<<"\n";
    return 0;
}
