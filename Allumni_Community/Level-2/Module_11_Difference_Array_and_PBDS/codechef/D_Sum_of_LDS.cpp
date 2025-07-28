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
    
    long long ans = 1LL*n*(n +1)/2;

    for (int i = 0; i + 1 < n; i++) 
    {
        if (vec[i] > vec[i + 1]) 
        {
            long long left_choices  = i+1;
            long long right_choices = n -(i + 1);

            ans += left_choices * right_choices;
        }
    }
    
    cout << ans << endl;
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
