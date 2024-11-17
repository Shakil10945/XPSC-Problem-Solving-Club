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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int countt = 0;

        sort(v.begin(), v.end());

        map<int,int> my_map;

        for (int i = 0; i < v.size(); i++)
        {
            my_map[v[i]]++;
            // for (int j = i + 1; j < v.size(); j++)
            // {
            //     if (v[i] == v[j])
            //     {
            //         countt++;
            //         v.erase(v.begin()+i);
            //         v.erase(v.begin()+j-1);
            //         i--;
            //         break;
            //     }
            // }
        }
        for(auto &x: my_map)
        {
            countt += (x.second/2);
        }
        

        cout << countt << endl;
    }

    return 0;
}