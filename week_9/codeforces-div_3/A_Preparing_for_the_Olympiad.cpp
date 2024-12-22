#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vec_2;

void input()
{
    cin>>n;
    vec.resize(n);
    vec_2.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
    for(int i=0; i<n; i++)  cin>>vec_2[i];
}

void solve()
{
    input();
    long long sum = vec[n-1];
    for(int i=0; i<n-1; i++)
    {
        //cout<<vec[i] - vec_2[i+1]<<" ";
        if(vec[i]-vec_2[i+1] > 0)
            sum+= vec[i] - vec_2[i+1];
    }
    cout<<sum<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
