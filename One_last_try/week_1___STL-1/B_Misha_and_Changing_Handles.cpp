#include <bits/stdc++.h>
using namespace std;

int n;
map<string, string> my_map;
set<string> last_name;



void input()
{
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string str, strr;
        cin>>str>>strr;

        if(!last_name.count(str))
        {
            my_map[str] = strr;
        }
        else
        {
            for(auto x: my_map)
            {
                if(x.second == str)
                {
                    my_map[x.first] = strr;
                }
            }
        }
        last_name.insert(strr);
    }
}

void solve()
{
    input();

    cout<<my_map.size()<<endl;

    for(auto x: my_map)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    my_map.clear();
    last_name.clear();    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    //int t;  cin>>t;
    //while(t--)  
    solve();

    return 0;
}
