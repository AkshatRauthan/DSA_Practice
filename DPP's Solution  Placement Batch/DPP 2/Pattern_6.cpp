#include "iostream"
using namespace std;

// The Pattern n = 4 Is:

// 1 
// 2 3
// 3 4 5
// 4 5 6 7

void pattern(int n){
    for (int i=1; i<=n; i++){
        int a = i;
        for (int j=1; j<=i; j++){
            cout<<a++<<" ";
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