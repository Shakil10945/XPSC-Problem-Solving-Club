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

    long long ans = 0;
    long long cnt =0;
    int x = 0;
    for(int i=0;i<n; i++)
    {
        x = max(x, vec[i]);
        ans +=vec[i];
        if(ans-x == x)
            cnt++;
        

        
        
    }
    cout<<cnt<<endl;
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