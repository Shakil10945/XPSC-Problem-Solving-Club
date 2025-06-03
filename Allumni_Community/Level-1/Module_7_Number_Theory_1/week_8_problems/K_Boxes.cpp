#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> level;
vector<int> gold;

void input()
{
    cin >> n>>k;
    level.resize(n);
    gold.resize(n);

    for (int i = 0; i < n; i++)
        cin >> level[i];
    for (int i = 0; i < n; i++)
        cin >> gold[i];
    
}

void solve()
{
    input();

    vector<int>prefix_gold(n);
    vector<int>sorted_gold(n);
    for(int i=0; i<n; i++)
    {
        sorted_gold[level[i]-1] = gold[i];
    }

    prefix_gold[0] = sorted_gold[0];
    for(int i=1; i<n; i++)
    {
        prefix_gold[i] = sorted_gold[i]+prefix_gold[i-1];
    }


    for(int i=0; i<n; i++)
    {
        if(level[i] == 1)
        {
            cout<<0<<" ";
            continue; 
        }
        cout<<prefix_gold[i]<<" ";
        
        //cout<<sorted_gold[i]<<" ";
    }
    cout<<endl;

    
    
    
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