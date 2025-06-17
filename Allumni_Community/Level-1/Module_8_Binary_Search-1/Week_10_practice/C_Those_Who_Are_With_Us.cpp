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

    int sizex =0;
    vector<set<int>>dset;
    for(int i=0; i<n; i++)
    {
        set<int>st;
        for(int j=0;j<m; j++)
        {
            if(vec[i][j]==k)
            {
                st.insert(j);
            }
        }
        if(st.size()>0)
            dset.push_back(st);
        if(st.size()>sizex)
            sizex = st.size();
    }
    if(dset.size()==1)
    {
        //cout<<n<<m<<endl;
        cout<<k-1<<endl;
    }
    else
    {
        bool ch  = false;
        set<int> last;
        if(sizex==1)
        {
            for(int i=0;i<dset.size(); i++)
            {
                for(auto gg: dset[i])
                    last.insert(gg);
            }
            if(last.size()>2)
                cout<<k<<endl;
            else
                cout<<k-1<<endl;
            return;
        }
        for(int i=0; i<dset.size();i++)
        {
            if(!ch && (dset[i].size()==sizex))
            {
                ch = true;
                continue;
            }
            for(auto gg: dset[i])
                last.insert(gg);
        }
        if(last.size()>1)   cout<<k<<endl;
        else                cout<<k-1<<endl;
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