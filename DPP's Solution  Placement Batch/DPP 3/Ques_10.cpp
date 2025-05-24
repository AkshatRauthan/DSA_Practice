#include "bits/stdc++.h"
using namespace std;

// Number of factors.
// GFG

int countFactors(int n) {
    int ans = 1;
    for (int i=2; i<=n; i++){
        if (!(n%i)) ans++;
    }
    return ans;
}

int main(){
    cout<<"\nEnter the number :\n";
    int n;
    cin>>n;

    int ans = countFactors(n);

    cout<<"\nThe number of factors of "<<n<<" are : \n"<<ans;

    cout<<"\n";

    return 0;
}