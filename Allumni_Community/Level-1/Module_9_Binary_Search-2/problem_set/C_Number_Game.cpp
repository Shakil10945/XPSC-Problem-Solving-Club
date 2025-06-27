#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input() {
    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve() 
{
    input();

    sort(vec.begin(), vec.end());

    auto ok = [&](int k) -> bool 
    {
        multiset<int>mset(vec.begin(),vec.end());
        for(int i=1; i<=k; i++)
        {
            int thesrhold = k-i+1;

            auto it = mset.upper_bound(thesrhold);
            if(it==mset.begin())
                return false;
            mset.erase(--it);
            if(!mset.empty())
            {
                int x = *mset.begin();
                mset.erase(mset.begin());
                mset.insert(x+thesrhold);
            }
        }
        return true;
    };

    int l = 0, r = n, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(mid)) 
        {
            ans = mid;

            l= mid+1;
           
        } 
        else 
            r = mid-1;

    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}