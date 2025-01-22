#include <bits/stdc++.h>
using namespace std;

int n, l, r;
vector<int> vec;

void input()
{
    cin>>n>>l>>r;
    vec.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();

    vector<long long>ar;
    ar.push_back(vec[0]);
    for(int i=1; i<n; i++)
    {
        long long x = ar[i-1] + vec[i];
        ar.push_back(x);
    }
    if(l==r)
    {
        cout<< *min_element(vec.begin(),vec.end());
        return;
    }
    long long sum;
    if(l!=1)
        sum = ar[r-1] - ar[l-2];
    else
        sum = ar[r-1];
    for(int i= 0; i<n- (r-l); i++)
    {
        if(ar[i+(r-l+1)] - ar[i])        

    }
    
    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
