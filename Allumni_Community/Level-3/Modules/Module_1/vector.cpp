#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<v.size()<<endl;
    v.pop_back();

    cout<<v.size()<<endl;

    for(int i=0; i<v.size();i++)
        cout<<v[i]<<endl;
    
    cout<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.clear();
    cout<<v.empty()<<endl;
    int n;
    cin>>n;

    vector<int> v(n, 5);

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    int n;
    cin>>n;
    vector<int> v;
    v.assign(n, -1);

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" "<<endl;
    }

    cout<<endl;

    vector<int> v;
    v.resize(5);

    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<v.size(); ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    auto it = v.begin()+2;
    cout<<*it<<" "<<endl;

    for(auto it = v.begin(); it!=v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    auto lastElement = --v.end();
    cout<<*lastElement<<endl;

    reverse(v.begin(), v.end());

    sort(v.begin(), v.end());

    for(auto val: v)
        cout<<val<<" ";
    cout<<endl;

    auto mn = min_element(v.begin(),v.end());
    int minElementPosition = mn - v.begin();

    cout<<minElementPosition<<endl;



    vector<int> vec;
    vec.push_back(88);
    vec.pop_back();
    vec.front();
    vec.back();

    vec.empty();
    vec.clear();
    vec.empty();
    vec.size();

    vec.assign(44, 9);
    vec.resize(77); vec.resize(77, 9);

    vec.begin();
    vec.end();
    
    --vec.end();

    reverse(vec.begin(), vec.end());
    sort(vec.begin(), vec.end());
    min_element(vec.begin(), vec.end());
    max_element(vec.begin(), vec.end());

    

    return 0;
}

