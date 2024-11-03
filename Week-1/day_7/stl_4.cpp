#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    set<pair<string, string>> new_name;
    map<string, vector<string>> old_name;

    for(int i=0; i<n;i++)
    {
        string old;
        string neww;

        cin>> old  >> neww;

        bool found = false;
        for(auto it: new_name)
        {
            if(it.second == old)
            {
                found = true;
                auto itt = find(old_name[it.first].begin(), old_name[it.first].end(), it.second);
                if(itt == old_name[it.first].end())
                {
                    old_name[it.first].push_back(neww);
                    it.second = neww;
                }
                break;
            }
        }
        if(!found)
        {
            new_name.insert({old, neww});
            old_name[old].push_back(neww);
        }
    }

    cout<< old_name.size()<<endl;

    for(auto it: old_name)
    {
        cout<< it.first<< " "<<it.second[it.second.size()-1]<<endl;
    }    

    return 0;
}