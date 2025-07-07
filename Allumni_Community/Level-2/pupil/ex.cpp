#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        // Check if already a palindrome
        bool isPal = true;
        for(int i = 0; i < n/2; i++){
            if(a[i] != a[n-1-i]){
                isPal = false;
                break;
            }
        }
        // If it's already palindrome or k==1, answer YES
        if(isPal || k == 1){
            cout << "YES\n";
            continue;
        }
        // If n == k, we can do exactly one operation (remove the k-th smallest = the largest of the array)
        if(n == k){
            vector<int> b = a;
            sort(b.begin(), b.end());
            int val = b[k-1];  // k-th smallest in whole array
            // remove one occurrence of val from a
            for(auto it = a.begin(); it != a.end(); ++it){
                if(*it == val){
                    a.erase(it);
                    break;
                }
            }
            // Check if resulting array is a palindrome
            bool ok = true;
            int m = a.size();
            for(int i = 0; i < m/2; i++){
                if(a[i] != a[m-1-i]){
                    ok = false;
                    break;
                }
            }
            cout << (ok ? "YES\n" : "NO\n");
            continue;
        }
        // Count frequencies of elements
        unordered_map<int,int> freq;
        for(int x : a){
            freq[x]++;
        }
        int maxf = 0;
        for(auto &p : freq){
            maxf = max(maxf, p.second);
        }
        // If any element appears at least k times, we can remove others and keep those k
        if(maxf >= k){
            cout << "YES\n";
            continue;
        }
        // As a heuristic, if an element appears >= k-1 times, and the minimum value appears more than once, say YES
        if(maxf >= k-1){
            int mn = INT_MAX;
            for(int x : a){
                mn = min(mn, x);
            }
            if(freq[mn] > 1){
                cout << "YES\n";
                continue;
            }
        }
        // Otherwise, output NO
        cout << "NO\n";
    }
    return 0;
}
