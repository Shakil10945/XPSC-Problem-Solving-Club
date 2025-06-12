#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    multiset<int> ml;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }

    auto it = ml.begin();
    it++;
    it--;
    cout<<*it<<endl;
    for(auto value: ml)
        cout<<ml<<" ";
    cout<<endl;

    auto it = ml.find(55);
    if(it!=ml.end())
        cout<<"Found" <<endl;
    else
        cout<<"NOT Found"<<endl;
    ml.erase(6);
    ml.erase(55);

    auto it = ml.find(5);
    ml.erase(it);

    int N;   cin>>N;
    auto it = ml.lower_bound(N);
    if(it == ml.end())
        cout<<"END"<<endl;
    else
        cout<<"NO"<<*it<<endl;

    for(auto value: ml)
        cout<<value<<" ";
    cout<<endl;
    return 0;
}

