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
    
    int zero = count(vec.begin(), vec.end(), 0);
    int non_zero = n- zero;

    int value_two_or_greater = count_if(vec.begin(), vec.end(), [](int x) {return x>=2;});

    if(zero <= (n+1)/2)
    {
        cout<<0<<endl;
    }
    else if(zero==n || value_two_or_greater)
    {
        cout<<1<<endl;
    }
    else
        cout<<2<<endl;
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