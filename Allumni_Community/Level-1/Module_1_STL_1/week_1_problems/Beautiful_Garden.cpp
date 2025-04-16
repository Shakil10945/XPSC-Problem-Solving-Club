#include <bits/stdc++.h>
using namespace std;

int n,k,d;
vector<int> vec;

void input()
{
    cin >> n>>k>>d;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    sort(vec.begin(),vec.end());

    int x = n-k;
    long long time =0;
    for(int i=0; i<x; i++)
    {
        time += ceil((double)d/vec[i]);

        //cout<<vec[i]<<"ceil of it is " << ceil((double)d/vec[i])<<endl;
    }

    cout<<time<<endl;

    //cout<<endl;


    
    
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