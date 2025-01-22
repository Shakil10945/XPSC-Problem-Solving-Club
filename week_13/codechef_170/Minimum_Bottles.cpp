#include <bits/stdc++.h>
using namespace std;

int n,x;
vector<int> vec;

void input()
{
    cin >> n>>x;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();
    int sum =0;
    
    for(int i=0;i<n; i++)
        sum+=vec[i];
    if(sum%x == 0)
        cout<<sum/x<<endl;
    else
        cout<<(sum/x)+1<<endl;
    

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