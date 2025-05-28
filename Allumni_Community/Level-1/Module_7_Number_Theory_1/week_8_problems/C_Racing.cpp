#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<pair<int,int>> vec2;

void input()
{
    cin >> n;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
    {
        int x,y; cin>>x>>y;
        vec2[i]= make_pair(x,y);
    }
    
}

void solve()
{
    input();

    vector<int>ans;
    bool check = false;
    int x = 0;

    for(int i=0; i<n; i++)
    {
        int l, r;
        l = vec2[i].first;
        r= vec2[i].second;

        if(vec[i]==0)
        {
            if(l<=x && (r>=x))
            {
                ans.push_back(x);
            }
            else
            {
                check = true;
                break;
            }
        }
        if(vec[i]==1)
        {
            x++;
            if(l<=x && (r>=x))
                ans.push_back(x);
            else
            {
                check =true;
                break;
            }
        }
        if(vec[i]==-1)
        {
            if(l<=x && r>=x)
            {
                ans.push_back(x);
            }
            else if((l<=(x+1)) && (r>=(x+1)))
            {
                x++;
                ans.push_back(x);
            }
            else
            {
                check = true;
                break;
            }
        }


    }
    if(check)
        cout<<-1<<endl;
    else
    {
        cout<<ans[0]<<" ";
        for(int i=1; i<n; i++)
        {
            cout<<ans[i]- ans [i-1]<<" ";
        }
        cout<<endl;
        //cout<<"x"<< endl;
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