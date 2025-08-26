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
    
    sort(vec.begin(),vec.end());

    int sreja= 0, dima = 0;
    int x= 1;
    while(!vec.empty())
    {
        if(x%2)
            sreja+= vec.back();
        else
            dima+= vec.back();
        vec.pop_back();
        x++;
    }
    cout<<sreja<<" "<<dima<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}