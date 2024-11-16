#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    map<string, deque<int>> my_map;
    deque<pair<string,bool>> dq;

    for(int i=0; i<t; i++)
    {
        string str;
        cin>>str;

        my_map[str].push_front(i);
        dq.push_back({str, true});

        if(my_map[str].size()>1)
        {
            dq[my_map[str][1]].second = false;
        }
    }
    for(int i=t-1; i>=0; i--)
    {
        if(dq[i].second)
        {
            cout<<dq[i].first[dq[i].first.size()-2]<<dq[i].first[dq[i].first.size()-1];
        }
    }
    cout<<endl;
    

    
    

    return 0;
}