#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n-1);

    for (int i = 0; i < n-1; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    if(n==1)
    {
        cout<<vec[0]<<" "<<vec[0]<<endl;
        return;
    }
    vector<int>ans;
    ans.push_back(vec[0]);
    for(int i=1; i<n-1; i++)
    {
        ans.push_back((vec[i]|vec[i-1]));
    }
    ans.push_back(vec[n-2]);

    //reverse(ans.begin(),ans.end());

    bool check = true;
    for(int i=0; i<n-1; i++)
    {
        if((ans[i]&ans[i+1]) != vec[i])
            check = false;
    }

    if(!check)
    {
        cout<<-1<<endl;
        return;
    }
    for(auto x: ans)
        cout<<x<<" ";
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