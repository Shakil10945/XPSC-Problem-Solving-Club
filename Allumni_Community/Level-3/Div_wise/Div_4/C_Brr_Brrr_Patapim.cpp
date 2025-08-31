#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<int> ans(2*n+1), t(2*n+1);
        for (int i=0,x; i<n*n; i++) {
            cin >> x;
            ans[(i/n)+(i%n)+2]=x;
            t[x]=1;
        }
        for (int i=1; i<=2*n; i++) if (!t[i]) ans[1]=i;
        for (int i=1; i<=2*n; i++) cout<<ans[i]<<' ';
        cout<<'\n';
    }
}