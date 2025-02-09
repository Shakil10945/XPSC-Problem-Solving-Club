#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> a;
void input()
{
    cin >> n>>m;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void solve()
{
    input();
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }

    


    

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