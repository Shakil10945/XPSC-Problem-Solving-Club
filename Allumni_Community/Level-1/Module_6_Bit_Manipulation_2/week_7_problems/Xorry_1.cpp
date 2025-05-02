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
        int x;  cin>>x;

        set<int>mset;
        for(int  i=0; i<31;i++)
        {
            if((x>>i)&1)    mset.insert(i);
        }
        int b = (1<<*mset.rbegin());
        mset.erase(--mset.end());

        if(mset.empty())
        {
            cout<<0<<" "<<b<<endl;
            continue;
        }
        int d = 0;
        while (!mset.empty())
        {
            d+= (1<<*mset.begin());
            mset.erase(mset.begin());
        }
        cout<<d<<" "<<b<<endl;
        
    }

    return 0;
}

