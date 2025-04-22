#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        int l=0, r=0;
        int ans =0;
        int b = 0;
        bool check= false;
        while(r<n)
        {
            if(str[r] == 'B')
            {
                b++;
            }
            if(r-l+1 == k)
            {
                if(str[l] == 'B')
                {
                   r++;
                   l=r;
                   b=0;
                   ans++;
                   //check = true;
                   continue; 
                }
                else 
                {
                    l++,r++;
                }
            }
            else
            {
                r++;
            }
        }
        cout<<(b? ans+1 : ans)<<endl;
    }

    return 0;
}

