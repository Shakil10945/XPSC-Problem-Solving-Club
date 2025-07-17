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
    
    int avg = 0;
    for(int i=0; i<n; i++)
    {
        avg+=vec[i];
        if(avg/(i+1)<40)
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
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