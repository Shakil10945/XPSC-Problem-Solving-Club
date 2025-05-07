#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;  cin>>n;
        vector<long long>vec;
        vec.push_back(n);
        for(long long i=0; i<__bit_width(n); i++)
        {
            if((n>>i)&1LL)    vec.push_back(((~(1LL<<i))&n));
        }
        sort(vec.begin(),vec.end());
        if(vec[0] == 0LL) vec.erase(vec.begin());
        cout<<vec.size()<<endl;
        for(auto x: vec)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}

