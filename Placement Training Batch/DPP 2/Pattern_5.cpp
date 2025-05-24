#include "iostream"
using namespace std;

// The Pattern n = 5 Is:

// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
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