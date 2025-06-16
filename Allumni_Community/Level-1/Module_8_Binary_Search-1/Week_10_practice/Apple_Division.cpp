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

    long long sum = accumulate(vec.begin(),--vec.end(),0LL);

    long long diff = 0;

    long long sum2 = vec[n-1];

    diff = abs(sum - sum2);

    for(int i=0; i<n-1; i++)
    {
        sum2+=vec[i];
        sum-=vec[i];
        diff = min(diff, abs(sum-sum2));

    }
    cout<<diff<<endl;

    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}