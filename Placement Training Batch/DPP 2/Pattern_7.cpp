#include "iostream"
using namespace std;

// The Pattern n = 4 Is:

// 1 
// 2 3
// 4 5 6 
// 7 8 9 10

void pattern(int n){
    int a = 1;
    for (int i=1; i<=n; i++){
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