#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        set<int> my_set;
        for(int i=0; i<n;i++)
        {
            cin>>v[i];
            my_set.insert(v[i]);
        }
        string str; cin>>str;

        set<int> dislike;
        set<int> like;
        set<int> real_dislike;
        set<int> real_like;
        auto it = my_set.begin();
        auto itt = --my_set.end();

        for(int i=0; i<n;i++)
        {
            if(str[i] == '0')
            {
                dislike.insert(*it);
                it++;
                real_dislike.insert(v[i]);
            }
            else
            {
                like.insert(*itt);
                itt--;
                real_like.insert(v[i]);
            }
        }
        map<int,int> my_map;
        map<int, int> my_map_like;

        for(auto &x: real_dislike)
        {
            my_map[x] = *dislike.begin();
            dislike.erase(dislike.begin());
        }
        for(auto &x: real_like)
        {
            my_map[x] = *like.begin();
            like.erase(like.begin());
        }
        for(int i=0; i<n; i++)
        {
            cout<<my_map[v[i]]<<" ";
        }
        cout<<endl;
        

        // for(int i=0; i<n;i++)
        // {
        //     if(real_dislike.count(v[i]))
        //     {
        //         auto itx = real_dislike.find(v[i]);
        //         int index = distance(real_dislike.begin(), itx);
        //         auto itxx = next(dislike.begin(), index);
        //         cout<<*itxx<<" ";
        //         my_map_dislike[v[i]] = *dislike.begin();
        //         dislike.erase(dislike.begin());
        //     }
        //     if(real_like.count(v[i]))
        //     {
        //         auto itm = real_like.find(v[i]);
        //         int index = distance(real_like.begin(), itm);
        //         auto itmm = next(like.begin(), index);
        //         cout<<*itmm<<" ";
        //     }
        // }
        // cout<<endl;
    }
    return 0;
}