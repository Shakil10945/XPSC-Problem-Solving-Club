#include <bits/stdc++.h>
#include "bits/stl_algobase.h"  // for __gcd, __lg
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

    int n = __lg(5);
    
    cout<<"HI"<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}