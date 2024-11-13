#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        int n, k;
        cin >> n >> k;
        map<int, set<int>> my_map;

        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;

            my_map[x].insert(i);
        }
        while (k--)
        {
            int l, r;
            cin >> l >> r;

            if(my_map.find(l) == my_map.end() || my_map.find(r) == my_map.end())
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int left = *my_map[l].begin();
                int right = *my_map[r].rbegin();

                if(left<right)      cout<<"YES"<<endl;
                else                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}