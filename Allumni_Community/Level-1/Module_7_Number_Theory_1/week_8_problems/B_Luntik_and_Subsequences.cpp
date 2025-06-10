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
    
    long long sum = accumulate(vec.begin(),vec.end(), 0LL);
    long long temp_sum = 0LL;
    long long ans = 0LL;
    long long count_zero=0LL, one=0LL;
    int l=0, r=0;
    while (r<n)
    {
        if(vec[r]==0)
        {
            //ans=(1<<count_zero);
            count_zero++;
        }
        if(vec[r] == 1) one++;
        r++;
    }

    cout<<(1LL<<count_zero)*(one)<<endl;
    

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