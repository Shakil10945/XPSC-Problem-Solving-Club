#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, string> new_old;
    while (t--)
    {
        string old, neww; cin>>old>>neww;
        if(new_old.count(old))
        {
            new_old[neww] = new_old[old];
            new_old.erase(old);
        }
        else    new_old[neww] = old;        
    }

    cout<<new_old.size()<<endl;
    for(auto x: new_old)
        cout<<x.second<<" "<<x.first<<endl;

    return 0;
}

