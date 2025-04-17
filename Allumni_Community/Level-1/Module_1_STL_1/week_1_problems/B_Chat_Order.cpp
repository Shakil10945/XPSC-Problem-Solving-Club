#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int n = t;
    vector<string>vec;
    while (t--)
    {
        string str;
        cin>>str;
        
        vec.push_back(str);
    }

    set<string>myset;

    for(int i=n-1; i>=0; i--)
    {
        if(myset.count(vec[i]))
            continue;
        cout<<vec[i]<<endl;

        myset.insert(vec[i]);
    }

    //cout<<33<<endl;

    return 0;
}

