#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s, t; cin >> s >> t;
        
        int p = n;
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                p = i;
                break;
            }
        }
        
        bool good = true;
        for (int i = 0; i <= p; i++){
            if (s[i] != t[i]){
                cout << -1 << "\n";
                good = false;
                break;
            }
        }
        
        if (!good) continue;
        
        vector <int> ans;
        for (int i = p + 1; i < n; i++){
            if (s[i] == '0'){
                ans.push_back(i);
                s[i] = '1';
            }
        }
        
        for (int i = n - 1; i > p; i--){
            if (s[i] != t[i]){
                ans.push_back(i);
            }
        }
        
        cout << ans.size() << "\n";
        for (auto x : ans){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}