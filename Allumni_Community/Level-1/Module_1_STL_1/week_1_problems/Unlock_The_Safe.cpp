#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n>>k;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];
    
}

void solve()
{
    input();
    int sum = 0;
    int dif = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int x= abs(vec[i]- vec2[i]);
        sum += (x>4)? 9%x : x;  
        dif = min(dif, abs(x-(9-x)));
    }
     //cout<<sum<<endl;
    cout<< ((k<sum)? "NO" : ((k-sum) %2 ==0)? "YES" : (sum+dif <= k)? "YES": "NO") <<endl;


    
    
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