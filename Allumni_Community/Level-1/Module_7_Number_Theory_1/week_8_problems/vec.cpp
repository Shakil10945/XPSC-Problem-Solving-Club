#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x; 
        cin>>x;
        v.push_back(x);
    }
    cout<<v.size()<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.clear();

    cout<<v.empty()<<endl;

    int n;  cin>>n;
    vector<int>v(n, 5);

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    int n;  cin>>n;
    vector<int>v;
    v.assign(n, -1);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    vector<int>v;
    v.resize(8);
    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
        cin>>v[i];
    cout<<endl;

    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;

    auto it = v.begin();
    cout<<*it<<endl;
    for(auto it = v.begin(); it!=v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    auto lastelement = --v.end();
    cout<<*lastelement<<endl;
    reverse(v.begin(), v.end());

    sort(v.begin(), v.end());

    for(auto value: v)
        cout<<value<<" ";
    cout<<endl;

    auto mn = min_element(v.begin(), v.end());

    cout<<*mn<<endl;

    auto mx = max_element(v.begin(),v.end());
    int maxElementPosition = mx- v.begin();

    cout<<maxElementPosition<<endl;
    return 0;
}

