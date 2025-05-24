#include "iostream"
using namespace std;

// The pattern for n = 5 is :
//  1                 1
//  1 2             2 1
//  1 2 3         3 2 1
//  1 2 3 4     4 3 2 1
//  1 2 3 4 5 5 4 3 2 1

void pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i>=j) cout<<j<<" ";
            else cout<<" "<<" ";
        }
        for (int j=n; j>=1; j--){
            if (i>=j) cout<<j<<" ";
            else cout<<" "<<" ";
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