#include <bits/stdc++.h>
using namespace std;

int n;
map<string,int>my_map;

void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;

        if(my_map.count(str))
        {
            cout<<str<<my_map[str]<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }
        my_map[str]++;
    }
        
}

void solve()
{
    input();
    my_map.clear();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //int t;
    //cin >> t;
    //while (t--)
    solve();

    return 0;
}