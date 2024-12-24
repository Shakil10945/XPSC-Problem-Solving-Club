#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin>>n>>k;
    vec.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();
    // sort(vec.begin(), vec.end());
    // for(auto x: vec)    cout<<x<<" ";

    // for(int i=0; i<min(n,k); i++)

    //     vec[i] = (vec[i] | (1<<30));

    // cout<<" 2 to the power 31 "<<(1<<31);
    // int andd = 1;
    // for(int i=0; i<n; i++)
    //     andd = (andd & vec[i]);

    // cout<<andd<<endl; 

    for(int i=0; i<32; i++)
    {
        cout<<"2 power "<<i<<" is = "<<"\t"<<(1LL<<i)<<endl;
    }
    cout<<endl;   
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
