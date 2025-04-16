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
    long long x = accumulate(vec.begin(),vec.end(), 0LL);
    int min_odd = INT_MAX;
    for(int i=0; i<n;i++)
    {
        if(vec[i]<min_odd && vec[i]%2!=0)
            min_odd = vec[i];
    }
    cout << ((x % 2 == 0) ? x : x -min_odd)<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}