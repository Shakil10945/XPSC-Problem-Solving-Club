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
        long long n;  cin>>n;
        set<long long>myset;
        myset.insert(n);
        for(long long i=0; i<=__lg(n); i++)
        {
            if((n>>i)&1)
                myset.insert((~(1LL<<i))&n);
        }
        while (*myset.begin() ==0)
        {
            myset.erase(myset.begin());
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

