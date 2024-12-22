#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> ar;
set<int> br;


void input()
{
    cin>>n>>m>>k;
    ar.resize(m);
    br.clear();

    for(int i=0; i<m; i++)  cin>>ar[i];
    for(int i=0; i<k; i++)
    {
        int x;
        cin>>x;
        br.insert(x);
    }
}

void solve()
{
    input();

    set<int> my_set;

    for(int i=1; i<=n; i++)
    {
        my_set.insert(i);
    }

    for(int i=0;i<m; i++)
    {
        my_set.erase(ar[i]);
        auto it = br.find(ar[i]);
        bool check = false;
        if(it != br.end())
        {
            br.erase(ar[i]);
            check = true;
        }

        if(my_set == br)
        {
            cout<<'1';
        }
        else
        {
            cout<<'0';
        }
        my_set.insert(ar[i]);
        if(check)   br.insert(ar[i]);
    }
    cout<<endl;



    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
