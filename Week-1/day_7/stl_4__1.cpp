#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    set<pair<string, string>> my_set;    //it contains old and new names

    map<string, vector<string>> my_map;     // it contains all list of a the handles

    for(int i=0; i<n;i++)
    {
        string old;
        string neww;

        cin>> old  >> neww;

        bool found = false;
        for(auto it: my_set)
        {
            if(it.second == old)
            {
                found = true;
                auto itt = find(my_map[it.first].begin(), my_map[it.first].end(),neww);
                if(itt == my_map[it.first].end())
                {
                    my_map[it.first].push_back(neww);
                    it.second = neww;

                    string stx = it.first;
                    string stxx = it.second;

                    my_set.erase(it);
                    my_set.insert({stx,neww});

                }
                break;
            }
        }
        if(!found)
        {
            my_set.insert({old, neww});
            my_map[old].push_back(neww);
        }
    }

    cout<< my_map.size()<<endl;

    for(auto it: my_map)
    {
        cout<< it.first<< " "<<it.second[it.second.size()-1]<<endl;
    }    

    return 0;
}