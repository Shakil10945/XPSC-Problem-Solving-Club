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
        int n;
        cin>>n;
        vector<pair<int,int>>vec;
        for(int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;
            vec[i]= make_pair(a,b);
        }
    }

    return 0;
}

