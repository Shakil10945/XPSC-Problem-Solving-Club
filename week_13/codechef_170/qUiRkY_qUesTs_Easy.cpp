#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> vec;

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
    for(int i=0;i<n; i++)
    {
        if(vec[i] < n)
            vec[i] = n;
    }
    
    long long sum = accumulate(vec.begin(),vec.end(), 0LL);

    if(sum> 1LL * n*n )
        cout<<sum<<endl;
    else
        cout<< 1LL * n*n<<endl;

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