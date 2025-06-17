#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int n,m;
int k = 0;
vector<vector<int>> vec;

void input()
{
    cin >> n>>m;
    vec.resize(n);
    k=0;

    for (int i = 0; i < n; i++)
    {
        vector<int>v(m);
        for(int j=0; j<m; j++)
        {
            cin>>v[j];
            k = max(k,v[j]);
        }
        vec[i] = v;
    }
    
}

void solve()
{
    input();

    int row=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<m; j++)
        {
            if(vec[i][j]==k)
            {
                row++;
                break;
            }
        }
    }

    if(row==1)
    {
        cout<<k-1<<endl;
        return;
    }

    
    else if(row>=2)
    {
        vector<set<int>>dset;

        for(int i=0; i<n; i++)
        {
            set<int>st;
            for(int j=0; j<m;j++)
            {
                if(vec[i][j]==k)
                    st.insert(j);
            }
            dset.push_back(st);
        }
        size_t si = 0;
        for (int i = 0; i < dset.size(); i++) 
        {
            si = max(si, dset[i].size());
        }

        //sort(dset.begin(),dset.end());
        set<int>xxx;
        bool found = false;
        for(int i=0; i<n; i++)
        {
            if(dset[i].size()==si && !found)
            {
                found = true;
                continue;
            }
            for(auto dm: dset[i])
                xxx.insert(dm);


        }

        if(xxx.size()>1)
            cout<<k-1<<endl;
        else
            cout<<k<<endl;

    }
    
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