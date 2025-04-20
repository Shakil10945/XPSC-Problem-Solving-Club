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
        int n, m;   cin>>n>>m;
        string a;   cin>>a;
        set<int> myset;
        while (m--)
        {
            int x; 
            cin>>x;
            myset.insert(x);
        }
        string b;   cin>>b;
        sort(b.begin(),b.end());
        while (!myset.empty())
        {
            a[*myset.begin()-1] = b[0];
            myset.erase(myset.begin());
            b.erase(b.begin());
        }
        
        cout<<a<<endl;
        
    }

    return 0;
}

