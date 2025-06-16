#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin>>str;
    map<char,int>mp;
    for(auto x: str)    
        mp[x]++;

    string s="";
    for(auto x: mp)
    {
        if(x.second%2==1)
        {
            s+=x.first;
            continue;
        }
    }
    if(s.size()>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(auto x: mp)
    {
        if(x.second==1)
        {
            //s+=x.first;
            continue;
        }
        for(int i=1; i<=(x.second/2); i++)
            cout<<x.first;
    }
    if(s!="")
        cout<<s[0];
    for(auto it =mp.rbegin(); it!=mp.rend(); it++)
    {
        if(it->second==1)
        {
            //s+=x.first;
            continue;
        }
        for(int i=1; i<=(it->second/2); i++)
            cout<<it->first;
    }

    return 0;
}

