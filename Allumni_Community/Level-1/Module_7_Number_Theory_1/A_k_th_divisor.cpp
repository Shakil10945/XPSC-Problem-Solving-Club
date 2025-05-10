#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin>>n>>k;

    vector<long long>vec;
    for(long long i=1;i*i<=n; i++)
    {
        if(n%i==0LL)
        {
            vec.push_back(i);
            if(i*i==n)  continue;
            vec.push_back(n/i);
        }
    }
    sort(vec.begin(),vec.end());
    if(k>vec.size())
    {
        cout<<-1<<endl;
    }
    else
        cout<<vec[k-1]<<endl;

    return 0;
}

