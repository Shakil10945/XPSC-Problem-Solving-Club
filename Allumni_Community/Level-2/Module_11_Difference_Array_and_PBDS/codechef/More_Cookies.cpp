#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();
    
    map<int,int>mp;
    sort(vec.begin(),vec.end());

    for(int i=0; i<n; i++)
    {
        mp[vec[i]]++;
    }

    if(mp[k]==0 && vec[0]<k)
    {
        cout<<0<<endl;
        return;
    }


    int x = 0;
    if(k<vec[0])
    {
        x = vec[0]-k;
        k= vec[0];
        for(int i=1; i<101; i++)
        {
            k++;
            x++;
            if(mp[k]==0)
            {
                cout<<x<<endl;
                return;
            }
        }
    }
    int y =0;
    for(int i=1; i<101; i++)
    {
        y++;
        k++;
        if(mp[k]==0)
        {
            cout<<y<<endl;
            return;
        }

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