#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    for (int i = 0; i < n; i++)
    {
        if(vec[i]<1)
        {
            cin>>vec2[i];
            vec2[i]=0;
            continue;
        }
        cin>>vec2[i];
    }
    
}

void solve()
{
    input();

    int maxx = *max_element(vec2.begin(),vec2.end());

    int x = 0;
    while(maxx>0)
    {
        int d=0;
        for(int i=0;i<n; i++)
        {
            if(vec2[i]==0)  continue;

            if(maxx>=vec2[i])
            {
                d+=vec[i];
            }
        }
        x = max(x, (d-maxx));
        maxx--;
    }

    cout<<x<<endl;
    
    
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