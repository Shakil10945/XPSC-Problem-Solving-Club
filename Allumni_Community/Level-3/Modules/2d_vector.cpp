#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<vector<int>>v;

    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;

        vector<int> a;
        for(int j = 0; j<m; j++)
        {
            int x; 
            cin>>x;
            a.push_back(x);
        }

        for(auto value: a)
            cout<<value<<" ";
        cout<<endl;

        v.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<v[i].size(); j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

    int x;
    cin>>x;
    vector<string>vec;

    for(int i=1;i<=x; i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<vec[i].size(); j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }



    return 0;
}

