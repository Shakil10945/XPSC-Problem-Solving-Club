#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    
}

void solve()
{
    input();
    int sum =0;
    while(n>9)
    {
        sum+= (n%10);
        n/=10;
    }
    sum+=n;

    cout<<sum<<endl;
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