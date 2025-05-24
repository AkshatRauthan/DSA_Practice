#include "iostream"
using namespace std;

// The Pattern for input 5 is :

//      *      
//     ***     
//    *****    
//   *******
//  *********  

void printPattern(int n){
    for (int i=1; i<=n; i++){
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
    printPattern(n);
    cout<<"\n";
    return 0;
}
