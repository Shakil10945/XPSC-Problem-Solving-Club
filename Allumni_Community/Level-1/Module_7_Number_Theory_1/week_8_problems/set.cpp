#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        s.insert(x);
    }

    auto it = s.begin();
    it++;
    it++;
    it--;
    cout<<*it<<endl;


    for(auto value: s)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    auto it = s.find(23);
    if(it!= s.end())
        cout<<"Found"<<endl;
    else
        cout<<"NOt Found"<<endl;
    s.erase(7);

    for(auto value: s)
        cout<<value<<" ";
    cout<<endl;
    cout<<s.count(5)<<endl;

    int N;
    cin>>N;

    auto it = s.lower_bound(N);
    if(it==s.end())
        cout<<"ENd"<<endl;
    else
        cout<<*it<<endl;

    int N;  cin>>N;

    auto it = s.upper_bound(N);

    if(it == s.end())
        cout<<"END"<<endl;

    else
        cout<<"Got it"<<endl;
    cout<<*it<<endl;

    return 0;
}

