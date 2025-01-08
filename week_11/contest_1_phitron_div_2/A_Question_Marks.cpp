#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void input()
{
    cin>>n;
    cin>>str;
}

void solve()
{
    input();

    map<char, int> my_map;

    for(int i=0; i<(4*n); i++)
    {
        my_map[str[i]]++;
    }

    int count = 0;

    for(auto ele: my_map)
    {
        if(ele.first != '?')
        {
            if(ele.second < n)
                count+=ele.second;
            else
                count+=n;
        }
    }
    cout<<count<<endl;
    my_map.clear();

    

    str.clear();
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
