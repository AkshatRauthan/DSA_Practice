#include "iostream"
#include "vector"
using namespace std;

// The Pattern for n = 3:
// 3 3 3 2 2 2 1 1 1
// 3 3 2 2 1 1
// 3 2 1

// The Pattern for n = 4:
// 4 4 4 4 3 3 3 3 2 2 2 2 1 1 1 1
// 4 4 4 3 3 3 2 2 2 1 1 1
// 4 4 3 3 2 2 1 1
// 4 3 2 1

vector<int> printPat(int n) {
    vector<int> v;

    for (int i=n; i<=1; i--){
        for (int j=n; j<=1; j--){
            for (int k=1; k<=i; k++){
                v.push_back(j);
            }
        }
        v.push_back(-1);
    }
    v.push_back(-1);
    return v;
}

void pattern(int n){
    for (int i=n; i>=1; i--){
        for (int j=n; j>=1; j--){
            for (int k=1; k<=i; k++){
                cout<<j<<" ";
            }
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