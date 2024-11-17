#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<pair<int, int>> vv;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int multiple = n - 2;

        vector<int> mm;

        for (int i = 0; i < n; i++)
        {
            if((multiple % v[i]) == 0)
            {
                mm.push_back(v[i]);
            }
        }
        sort(mm.begin(), mm.end());

        // for(auto &x: mm)
        //     cout<<x<<" ";
        // cout<<endl;
        multiset<int> my_set;
        for(auto &x: mm)
        {
            my_set.insert(x);
        }

        
        bool check = false;

        for (int i = 0; i < mm.size()-1; i++)
        {
            int md = multiple/ mm[i];
            if(my_set.count(md))
            {
                cout<<mm[i]<<" "<<md<<endl;
                break;
            }
        }
    }

    return 0;
}
