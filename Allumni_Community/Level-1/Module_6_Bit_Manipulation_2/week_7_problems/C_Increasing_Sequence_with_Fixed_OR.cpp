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
        int n;  cin>>n;
        set<int>myset;
        myset.insert(n);
        for(int i=0; i<=__lg(n); i++)
        {
            if((n>>i)&1)
            {
                myset.insert( (~(i<<1))&n);
            }
        }
        cout<<myset.size()<<endl;
        for(auto x: myset)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}

