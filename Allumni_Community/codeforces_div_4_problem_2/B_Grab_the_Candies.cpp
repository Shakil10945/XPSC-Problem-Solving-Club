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
   
    even = accumulate(vec.begin(),vec.end(), 0, [&](int sum, int x){return sum +(x%2 == 0 ? x : 0);});
    odd  = accumulate(vec.begin(), vec.end(), 0, [&](int sum, int x){return sum +(x%2 != 0 ? x : 0);});
    cout<<((even>odd)? "YES": "NO")<<endl;
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