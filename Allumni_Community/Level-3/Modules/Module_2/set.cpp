#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    set<int> s;
    for(int i=1;i<=n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    auto it = s.begin();
    it++;
    it--;

    cout<<*it<<endl;

    for(auto value: s)
        cout<<value<<" ";
    cout<<endl;

    auto it = s.find(26);

    if(it != s.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
    
    s.erase(6);
    for(auto value: s)
        cout<<value<<endl;

    cout<<endl;

    cout<<s.count(4)<<endl;

    int N;
    cin>>N;
    auto it = s.lower_bound(N);
    if(it == s.end())
        cout<<"END"<<endl;
    else
        cout<<*it<<endl;

    int x;
    cin>>x;
    auto it = s.upper_bound(x);

    if(it == s.end())
        cout<<"NO"<<endl;
    else
        cout<<*it<<endl;
    return 0;
}

