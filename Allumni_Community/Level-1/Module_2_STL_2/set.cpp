#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    set<int>s;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    auto it = s.begin();
    it++;
    it++;
    it++;
    it--;

    cout<<*it<<endl;

    for(auto it : s)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    auto it= s.find(34);
    if(it != s.end())
        cout<<" Found"<<endl;
    else
        cout<<"NOt found"<<endl;

    s.erase(6);
    for(auto value: s)
        cout<<value<<endl;
    cout<<endl;
    cout<<s.count(5)<<endl;

    int n;
    cin>>n;
    auto it = s.lower_bound(5);
    if(it == s.end())
        cout<<"END"<<endl;
    else
        cout<<*it<<endl;

    int n;
    cin>>n;
    auto it = s.upper_bound(n);
    if(it == s.end())
        cout<<"END"<<endl;
    else
        cout<<*it <<endl;

    return 0;
}

