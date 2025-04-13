#include <bits/stdc++.h>
using namespace std;

int n,m,b;
vector<int> vec;

void input()
{
    cin >> n >> m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    cin>>b;
}

void solve()
{
    input();

    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    vector<int> x =vec;
    for(int i=0; i<n; i++)
        x[i] =min(vec[i], b - vec[i]);
    
    for(int i=1; i<n; i++)
    {
        if(x[i] < x[i-1])
        {
            x[i] = max(b-vec[i], vec[i]);

            if(x[i] < x[i-1])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;

    
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