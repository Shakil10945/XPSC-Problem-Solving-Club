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

    vector<int>ans(n,0);

    int minn = *min_element(vec.begin(),vec.end());
    int maxx = *max_element(vec.begin(),vec.end());

    int curr_min = vec[0];
    ans[0]=1;

    for(int i=1; i<n; i++)
    {
        if(vec[i]<curr_min)
        {
            ans[i]=1;
            curr_min = vec[i];
        }
    }
    int curr_max = vec[n-1];
    ans[n-1]=1;

    for(int i=n-2; i>=0; i--)
    {
        if(vec[i]>curr_max)
        {
            ans[i]=1;
            curr_max = vec[i];
        }
    }
    for(auto x: ans)
        cout<<x;
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