#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int maxx = *max_element(vec.begin(),vec.end());
    int minn = *min_element(vec.begin(),vec.end());

    long long sum = accumulate(vec.begin(),vec.end(), 0LL);
    //cout<<sum<<endl;
    int count = 0;
    for(int i=0; i<n;i++)
    {
        if(vec[i] == maxx)
            count++;
    }
    if(((maxx- minn)-1) >k)
    {
        cout<<"Jerry"<<endl;
        return;
    }
    if(((maxx - minn)-1==k) && (count>1))
    {
        cout<<"Jerry"<<endl;
        return;
    }
    if(sum%2LL == 0LL)
    {
        cout<<"Jerry"<<endl;
        return;
    }
    else
    {
        cout<<"Tom"<<endl;
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