#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    for (int i = 0; i < n; i++)
        cin >> vec2[i];
    
}

void solve()
{
    input();
    set<int>mset;
    set<int>msetzero;
    for(int i=0; i<n;i++)
    {
        if(vec2[i]>vec[i])
        {
            cout<<"NO"<<endl;
            return;
        }
        if(vec2[i])
            mset.insert(vec[i]-vec2[i]);
        if(vec2[i]==0)
        {
            msetzero.insert(vec[i]-vec2[i]);
        }
    }

    if(mset.size()>1)
    {
        cout<<"NO"<<endl;
        return;
    }    

    if(mset.size()==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    
    if(msetzero.size())
    {
        if(*msetzero.rbegin() >*mset.begin())
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}