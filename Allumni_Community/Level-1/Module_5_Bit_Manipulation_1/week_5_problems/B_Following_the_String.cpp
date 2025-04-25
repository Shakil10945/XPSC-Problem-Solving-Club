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
    map<char, int> mymap;
    for(auto i = 'a'; i<='z'; i++)
    {
        mymap[i] = 0;
    }
    string str = "";
    for(int i=0;i<n; i++)
    {
        for(auto &x: mymap)
        {
            if(x.second == vec[i])
            {
                
                str+=x.first;
                x.second++;
                //cout<<x.first<<" "<<x.second<<" dd "<<endl;
                break;
            }
        }
    }
    cout<<str<<endl;
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