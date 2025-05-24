#include "iostream"
using namespace std;

// The Pattern n = 4 Is:

// *
// * *
// * * *
// * * * *

void pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<"* ";
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