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
    if(n==3)
    {
        cout<<0<<endl;
        return;
    }
    sort(vec.begin(), vec.end());

    cout<<min({(vec[n-3]-vec[0]), (vec[n-2]- vec[1]), (vec[n-1] - vec[2])})<<endl;
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