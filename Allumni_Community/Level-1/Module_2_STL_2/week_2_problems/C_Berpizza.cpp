#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int>vec;

    map<int,int>monocrap; // pos, bill
    map<int, set<int>>polycrap; // bill--> pos,1.2.3;
    int position =1;
    while (t--)
    {
        int q;
        cin>>q;
        if(q==1)
        {
            int bill; cin>>bill;
            monocrap[position] = bill;
            polycrap[bill].insert(position);
            position++;
            continue;
        }

        else if(q==2)
        {
            cout<<monocrap.begin()->first<<" ";
            polycrap[monocrap.begin()->second].erase(monocrap.begin()->first);
            if(polycrap[monocrap.begin()->second].size() == 0)
                polycrap.erase(monocrap.begin()->second);
            monocrap.erase(monocrap.begin());
            //monocrap.erase(monocrap.begin());
            // polycrap.erase({monocrap.begin()->second, monocrap.begin()->first});
            // monocrap.erase(monocrap.begin());

        }
        else
        {
            cout<<*polycrap.rbegin()->second.begin()<<" ";

            monocrap.erase(*polycrap.rbegin()->second.begin());

            polycrap.rbegin()->second.erase(polycrap.rbegin()->second.begin());
            if(polycrap.rbegin()->second.size() == 0)
                polycrap.erase(--polycrap.end());
        }

        
    }
    cout<<endl;
    return 0;
}

