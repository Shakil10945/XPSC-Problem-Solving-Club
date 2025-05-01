#include <bits/stdc++.h>
using namespace std;
set<int> myset;
void set_xor()
{
    for(int i=0;i<(1<<15); i++)
    {
        string str = to_string(i);
        string strr = str;
        reverse(strr.begin(), strr.end());

        if(str == strr)
        {
            myset.insert(i);
        }
    }
}


int n;
multiset<int> vec;

void input()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vec.insert(x);
    }
    
}

void solve()
{
    set_xor();
    input();
    long long ans = 0;
    for(auto i=vec.begin(); i!=vec.end();i++)
    {
        for(auto it = myset.begin(); it!=myset.end(); it++)
        {
            ans+= vec.count(*i^*it)<<" ";
            cout<<(*i^*it)<<endl;
            if(!(*i^*it))
            {
                ans--;
            }
        }
    }
    cout<<endl<<endl;
    cout<<ans<<endl;

    myset.clear();
    vec.clear();
    
    
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