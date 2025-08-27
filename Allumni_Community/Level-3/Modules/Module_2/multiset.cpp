#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    multiset<int> ml;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }

    auto it = ml.begin();
    it++;
    it++;
    it--;

    cout<<*it<<endl;

    for(auto value: ml)
        cout<<value<<" ";
    cout<<endl;

    auto it = ml.find(55);

    if(it != ml.end())
        cout<<"found"<<endl;

    else
        cout<<"Not found"<<endl;
    
    ml.erase(it);

    for(auto value: ml)
        cout<<value<<" ";
    cout<<endl;

    cout<<ml.count(9)<<endl;

    int N;
    cin>>N;

    auto it = ml.lower_bound(N);
    if(it==ml.end())
        cout<<"NO"<<endl;
    else
        cout<<*it<<endl;

    int x;
    cin>>x;
    auto it = ml.upper_bound(N);
    ml.erase(it);

    if(it == ml.end())
        cout<<"NO"<<endl;
    else
        cout<<*it<<" "<<endl;
    for(auto value: ml)
        cout<<value<<" ";
    cout<<endl;

    return 0;
}

