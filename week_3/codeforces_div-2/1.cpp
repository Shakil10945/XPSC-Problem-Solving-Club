#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        multiset<int> my_set;
        map<int,int>my_map;

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            my_set.insert(v[i]);
            my_map[v[i]]++;
        }
        int max_freq = -1;
        for(auto &x : my_map)
        {
            if(x.second > max_freq)
            {
                max_freq = x.second;
            }
        }
        cout<< n- max_freq<<endl;

        
    }
    
    return 0;
}