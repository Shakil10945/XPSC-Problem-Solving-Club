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

long long countInversions(const vector<int>& a) 
{
    long long zeroes = 0, res = 0;
    for(int i = a.size() - 1; i >= 0; --i) 
    {
        if(a[i] == 0)   ++zeroes;
        else            res+=zeroes;
    }
    return res;
}

void solve()
{
    input();

    long long ans = countInversions(vec);

    for(int i = 0; i < n; ++i) 
    {
        if(vec[i] == 0) 
        {
            vec[i] = 1;
            ans = max(ans, countInversions(vec));
            vec[i] = 0;
            break;
        }
    }

    for (int i=n-1;i>=0;--i) 
    {
        if(vec[i] == 1) 
        {
            vec[i] = 0;
            ans = max(ans, countInversions(vec));
            vec[i] = 1;
            break;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}