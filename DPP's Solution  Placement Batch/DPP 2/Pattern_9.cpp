#include "iostream"
using namespace std;

// The Pattern n = 4 Is:

// A B C D
// B C D E
// C D E F
// D E F G

void pattern(int n){
    for (int i=1; i<=n; i++){
        char ch = 'A'+i-1;
        for (int j=1; j<=n; j++){
            cout<<ch++<<" ";
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