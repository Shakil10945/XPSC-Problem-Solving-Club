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
    
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        string str; cin>>str;

        int u= count(str.begin(), str.end(), 'U') %10;
        int d = count(str.begin(),str.end(), 'D') %10;

        vec[i] =  ((vec[i] - u < 0) ? (10+ (vec[i]-u)) : (vec[i]-u));
        vec[i] = ((vec[i]+d >9)? ((vec[i]+d) %10 ): (vec[i]+d));

        cout<<vec[i]<<" ";
    }
    cout<<endl;
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