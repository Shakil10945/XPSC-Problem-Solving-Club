#include <bits/stdc++.h>
using namespace std;

int n,x;
vector<int> vec;

void input()
{
    cin >> n>>x;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    int xs,y;
    bool check = false;
    for(int i=0; i<n; i++)
    {
        if(vec[i]==1 && (!check))
        {
            xs=i;
            check = true;
        }
        if(vec[i]==1)       y=i;
    }
   // cout<<xs<<" "<<y<<endl;
    cout<<(xs+x<=y? "NO": "YES")<<endl;
    
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