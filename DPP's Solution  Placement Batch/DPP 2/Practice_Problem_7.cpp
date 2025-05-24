#include "iostream"
using namespace std;

// The pattern for n = 4 is :

//  1           1
//    2       2
//      3   3
//        4
//      3   3
//    2       2
//  1           1

void pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=2*n-1; j++){
            if (j==i || j==(2*n - i)){
                cout<<i<<" ";
            }
            else cout<<" "<<" ";
        }
        cout<<"\n";
    }
    for (int i=n-1; i>=1; i--){
        for (int j=1; j<=2*n-1; j++){
            if (j==i || j==(2*n - i)){
                cout<<i<<" ";
            }
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