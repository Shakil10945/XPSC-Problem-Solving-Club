#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();
    
    sort(vec.begin(),vec.end());

    int x = vec.back();

    if(vec[n-2]+vec[n-3]<=vec.back())
    {
        int z = 0;

        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                z = max(z, (vec.back()%(vec[i]+vec[j])));
            }
        }
        x = max(z, vec[n-2]);

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