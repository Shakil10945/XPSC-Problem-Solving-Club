// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;cin>>n;
//         int m=n*(n-1)/2,b[m];
//         for(int i=0;i<m;i++)cin>>b[i];
//         sort(b,b+m);
//         for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
//         cout<<"1000000000\n";
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n*(n-1)/2);

    for (int i = 0; i < n*(n-1)/2; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    
    int m = n*(n-1)/2;

    sort(vec.begin(),vec.end());

    for(int i=0; i<m; i+=--n)
        cout<<vec[i]<<" ";
    cout<<1000000000<<endl;
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