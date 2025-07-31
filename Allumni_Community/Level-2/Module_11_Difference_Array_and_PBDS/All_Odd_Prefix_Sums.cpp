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
    
    int odd = 0, even = 0;

    for(int i=0; i<n; i++)
    {
        if(vec[i]%2==0) even++;
        else            odd++;
    }

    if(odd==1)  cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;
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