#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mymap;
    // set<int> myset;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
        mymap[d]++;
        // myset.insert(d);
    }
    int distinct_elements = mymap.size();
    vector<int> pref_elements;
    for (int i = 0; i < n; i++)
    {
        pref_elements.push_back(mymap.size());

        mymap[v[i]]--;
        if (mymap[v[i]] == 0)
            mymap.erase(v[i]);
    }

    while (m--)
    {
        int x;
        cin >> x;
        cout<<pref_elements[x-1]<<endl;

        
    }
    // for(int i=0; i<pref_elements.size();i++)
    // {
    //     cout<<pref_elements[i]<<" ";

    // }

    return 0;
}