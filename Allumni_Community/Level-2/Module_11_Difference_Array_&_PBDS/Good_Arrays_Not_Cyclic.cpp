#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int n;
vector<string> vec;

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

    vector<long long> rowC(n, 0);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(vec[i][j]=='1')  rowC[i]++;
        }
    }

    long long total = 1;
    bool noArray = false;
    for(int i=0; i<n; i++)
    {
        if(rowC[i]==0)
        {
            noArray = true;
            break;
        }
        total = ((total%MOD)*(rowC[i]%MOD))%MOD;
    }
    if(noArray)
    {
        cout<<0<<endl;
        return;
    }

    long long peri = 1;
    int half = n/2;
    for(int i=0; i<half; i++)
    {
        long long commonC = 0;
        for(int j=0; j<n; j++)
        {
            if(vec[i][j]=='1' && vec[i+half][j] == '1')
                commonC++;
        }
        peri = ((peri%MOD) * (commonC%MOD))%MOD;
    }

    long long ans = (total-peri)%MOD;

    if(ans<0)   ans+=MOD;
    cout<<ans<<endl;
    
    
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