#include <bits/stdc++.h>
using namespace std;

// Wrong Answer Still

string solve(int n){
    if (n == 2 || n == 3) return "0";
    vector<bool> v(abs(sqrt(n))+1, false);
    int p=0, q=1;

    for (int i=2; i<v.size(); i++){
        // Check: i => divisor of n
        if (!(n%i)){
            if (n/i == i) q++;
            else q+=2;

            // Check: i and n/i => even perfect square
            if (!(i%2)){
                int x = sqrt(i);
                if (pow(x,2) == i) q++;
            }
            if (i!=(n/i) && !((n/i)%2)){
                int x = sqrt(n/i);
                if (pow(x,2) == (n/i)) q++;
            }
        }
    }
    string ans = "" + to_string(p) + "/" + to_string(q);
    return ans;
}

int main(){

}