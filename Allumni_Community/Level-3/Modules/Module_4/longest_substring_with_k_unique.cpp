#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

int longestKsbstr(string s, int k)
{

    int n = s.size(), l = 0, r=0, ans = -1;
    map<char, int> cnt;

    while(r<n)
    {
        cnt[s[r]]++;
        if(cnt.size()==k)
            ans = max(ans, r-l+1);

        else
        {
            while (cnt.size()> k && l <= r)
            {
                cnt[s[l]]--;
                if(cnt[s[l]] == 0)
                    cnt.erase(s[l]);
                l++;
            }            
        }
        r++;
    }
    return ans;

}

void solve()
{
    input();
    
    int k;
    cin>>k;
    string str;
    cin>>str;
    int x = longestKsbstr(str , k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}