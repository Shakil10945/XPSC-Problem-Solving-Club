#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; cin>>str;
    int k;  cin>>k;

    int n =str.size(), l=0, r=0, ans=-1;
    
    map<char, int> cnt;
    while(r<n)
    {
        cnt[str[r]]++;
        if(cnt.size() ==k)
        {
            ans = max(ans, r-l+1);
        }

        else
        {
            while (cnt.size()>k && l<=r)
            {
                cnt[str[l]]--;
                if(cnt[str[l]]==0)
                    cnt.erase(s[l]);
                l++;
            }
            
        }
        r++;
    }

    return 0;
}

