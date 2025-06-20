// #include <bits/stdc++.h>
// using namespace std;

// int n;
// vector<int> vec;

// void input()
// {
//     cin >> n;
//     vec.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
    
// }

// void solve()
// {
//     input();

//     //vector<long long>prefix_sum(n);
//     int prefix_sum =0;
//     long long ans = 0;
//     map<long long,int>mp;
//     mp[0]++;


//     for(int i=0; i<n; i++)
//     {
//         prefix_sum = ((prefix_sum%n)+(vec[i]%n)%n);
//         prefix_sum = (prefix_sum)%n;
//         //cout<<prefix_sum[i]<<" ";

//         //if(mp[prefix_sum])
//         ans+= mp[prefix_sum];
//         mp[prefix_sum]++;
//         //mp[vec[i]]++;
//     }
//     cout<<ans<<endl;
    
    
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

    
//         solve();

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //int n;
    vector<int>m(n);
    long long psums = 0;
    m[psums]=1;
    
    for(int i=0; i<n; i++)
    {
        int a;  cin>>a;
        psums +=a;

        m[(psums%n + n)%n]++;
    }

    long long ans = 0;
    for(long long x: m)
    {
        ans+= x*(x-1)/2;
    }
}