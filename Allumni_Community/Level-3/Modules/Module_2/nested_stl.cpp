#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<vector<int>, int>mp;
    vector<int> a;
    a.push_back(3);
    a.push_back(4);
    a.push_back(33);

    mp[a] = 66;

    for(auto [x,y]: mp)
    {
        vector<int> v = x;
        for(auto value: v)
            cout<<value<<" ";
        cout<<endl;
        cout<<y<<endl;
    }

    map<int,set<int>>mpx;

    set<int> st;
    st.insert(55);
    st.insert(88);
    st.insert(89);

    set<int> stx;
    stx.insert(77);
    stx.insert(55);

    mpx[4] = st;
    mpx[5] = stx;

    for(auto [x,y]: mpx)
    {
        cout<<x<<" ";
        for(auto value: y)
            cout<<value<<" ";
        cout<<endl;
    }

    int x = 6, y = 55;
    auto lb = mpx.lower_bound(x);
    if(lb !=mpx.end())
    {
        int ans = lb->first;
        cout<<ans <<endl;
        auto lbb = mpx[ans].lower_bound(y);
        if(lbb != mp[ans].end())
            cout<<*lbb<<endl;

    }
    else
        cout<<"HOooo"<<endl;


    return 0;
}

