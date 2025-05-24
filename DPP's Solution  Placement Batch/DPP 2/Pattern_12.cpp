#include "iostream"
using namespace std;

// The Pattern n = 5 Is:

//          1
//        2 1 2
//      3 2 1 2 3      ==> n rows and (2n-1) columns ==> For columns => First n columns decreasing, then n-1 decreasing. ==> 5 to 1 then to 5.
//    4 3 2 1 2 3 4
//  5 4 3 2 1 2 3 4 5

void pattern(int n){

    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            if (i >= j) cout<<j<<" ";
            else cout<<" "<<" ";
        }

        for (int j=2; j<=i; j++){
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