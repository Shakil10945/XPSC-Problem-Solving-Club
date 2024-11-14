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
        map<int, int> my_map;

        for(int i=0; i<n;i++)
        {
            if(str[i] == '0')
            {
                my_map[v[i]] = *it;
                it++;
            }
            else
            {
                my_map[v[i]] = *itt;
                itt--;
            }
        }

        for(int i=0; i<v.size(); i++)
        {
            cout<< my_map[v[i]]<<" ";
        }
        cout<<endl;

    }   

    return 0;
}