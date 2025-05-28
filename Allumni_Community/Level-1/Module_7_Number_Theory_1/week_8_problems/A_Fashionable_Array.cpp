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
    
    sort(vec.begin(),vec.end());

    int l=0, r= n-1;
    if((vec[l]+vec[r])%2==0)
    {
        cout<<0<<endl;
        return;
    }
    int ans = INT_MAX;
    if(vec[r]%2==0)
    {
        while(l<n && (vec[l]%2 != 0))
        {
            l++;
        }
        //ans = min(ans, (n- (l-r+1)));
    }
   
    //l=0;
    else
    {
        while (l<n && (vec[l]%2 == 0))
        {
            l++;
        }
    }
    ans = min(ans, l);
    l=0;
    reverse(vec.begin(),vec.end());
    if(vec[r]%2==0)
    {
        while(l<n && (vec[l]%2 != 0))
        {
            l++;
        }
    }

    else
    {
        while (l<n && (vec[l]%2 == 0))
        {
            l++;
        }
    }
    ans = min(ans, l);



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