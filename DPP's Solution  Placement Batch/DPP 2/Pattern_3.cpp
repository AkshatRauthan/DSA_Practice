#include "iostream"
using namespace std;

// The Pattern n = 5 Is:

// 1 1 1 1 1
// 2 2 2 2 2 
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

void pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<i<<" ";
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