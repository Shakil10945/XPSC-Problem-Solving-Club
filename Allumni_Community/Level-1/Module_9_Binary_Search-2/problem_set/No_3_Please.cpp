#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

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
    
    int twos = count(vec.begin(),vec.end(), 2);
    int ones = count(vec.begin(),vec.end(), 1);

    if(!ones || !twos)
    {
        if(n<=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return;
    }

    if(twos>=ones+1 || ones>=twos+1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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