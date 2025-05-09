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
    
    int max_odd = 0;
    int max_even = 0;

    for(int i=0; i<n; i++)
    {
        if(i%2)
        {
            max_even = max(max_even, vec[i]);
            continue;
        }
        max_odd = max(max_odd, vec[i]);
    }

    cout<< max((max_odd + (n/2) + (n%2)), max_even + (n/2))<<endl;
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