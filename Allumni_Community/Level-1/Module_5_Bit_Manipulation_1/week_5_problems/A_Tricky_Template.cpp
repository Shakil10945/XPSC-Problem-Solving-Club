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
        string a,b,c;   cin>>a>>b>>c;

        set<int>myset;
        for(int i=0; i<n; i++)
        {
            if(c[i] == a[i] || c[i] == b[i])
                myset.insert(i);
        }
        cout<<(myset.size() == n? "NO": "YES")<<endl;
    }

    return 0;
}

