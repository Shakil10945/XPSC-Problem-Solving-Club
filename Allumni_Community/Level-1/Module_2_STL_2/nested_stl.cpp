#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<vector<int>,int>mp;
    vector<int>a;
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    a.push_back(7);
    mp[a] = 88;

    for(auto [x,y] : mp)
    {
        vector<int> v = x;
        for(auto dd : v)
        {
            cout<<dd<<" ";
        }
        cout<<endl;

        cout<<y<<endl;
    }

    map<int, set<int>>mp2;
    set<int>s1;
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);

    set<int>s2;
    s2.insert(8);
    s2.insert(8);
    s2.insert(8);
    s2.insert(8);
    s2.insert(8);
    s2.insert(8);
    s2.insert(8);


    set<int>s3;
    s3.insert(9);
    s3.insert(9);
    s3.insert(9);
    s3.insert(9);
    s3.insert(9);
    s3.insert(9);
    s3.insert(9);

    mp2[8] = s1;
    mp2[2] = s1;
    mp2[9] = s1;
    mp2[9] = s1;

    for(auto [x,y] :  mp2)
    {
        cout<<x<<" -> ";

        for(auto value : y)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }

    int x =88, y = 99;

    auto LB1 = mp2.lower_bound(x);
    if(LB1 != mp2.end())
    {
        int ans = LB1->first;
        cout<<ans<<endl;

        auto LB2 = mp2[ans].lower_bound(y);
        if(LB2 != mp2[ans].end())
        {
            cout<<*LB2<<endl;
        }
        else
        {
            
        }
    }
    else
    {
        
    }

    


    return 0;
}

