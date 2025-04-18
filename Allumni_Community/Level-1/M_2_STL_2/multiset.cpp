#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    multiset<int>ml;
    for(int i=0;i<n; i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }

    auto it = ml.begin();
    it++;
    it++;
    it++;
    it--;

    cout<<*it<<endl;
    for(auto value: ml)
        cout<<value<<" ";
    cout<<endl;

    auto it  = ml.find(15);

    if(it != ml.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;

    ml.erase(6);
    ml.erase(5);

    for(auto value: ml)
        cout<<value<<" ";
    cout<<endl;

    auto it = ml.find(8);
    ml.erase(it);

    for(auto x : ml)
        cout<<x<<endl;
    cout<<endl;

    cout<<ml.count(7);

    auto it = ml.lower_bound(n);
    if(it == ml.end())
        cout<<"END"<<endl;

    else        cout<<*it<<endl;

    int n;  cin>>n;
    auto it = ml.upper_bound(n);
    if(it == ml.end())
        cout<<"END"<<endl;
    else
        cout<<*it<<endl;

    for(auto value: ml)
        cout<<value<<" ";
    cout<<endl;

    return 0;
}

