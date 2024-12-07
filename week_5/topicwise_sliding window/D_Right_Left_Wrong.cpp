#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vector<int> vec(n);
    vector<int> ps(n+1, 0);
    string s;

    for(int i=1; i<=n; i++)
    {
        cin>>vec[i-1];
        ps[i] = vec[i-1] + ps[i-1];
    }
    cin>>s;

    int i=0, j=n-1, total = 0;
    while (i<j)
    {
        while(i<n && s[i] != 'L')   i++;
        if(i==n)        break;

        while(j>=0 && s[j] != 'R')      j--;
        if(j == -1 && j<i)      break;

        total += ps[j+1]-ps[i];
        i++;
        j--;
    }
    cout<<total<<endl;
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}