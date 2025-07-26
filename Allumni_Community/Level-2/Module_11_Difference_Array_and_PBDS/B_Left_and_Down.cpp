#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long a, b, k;
        cin >> a >> b >> k;

        long long M = max(a, b);
        long long g = gcd(a, b);
        long long need = (M + k - 1) / k;
        cout << (g >= need ? 1 : 2) <<endl;
    }

    return 0;
}
