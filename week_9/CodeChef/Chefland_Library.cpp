#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin>>n;
    vec.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();

    long long sum = 0;

    map<int, int> my_map;
    set<int> my_set;

    for(int i=0; i<n; i++)
    {
        my_map[vec[i]] = i+1;
        my_set.insert(vec[i]);
    }
    for(auto value: my_set)
    {
        sum += my_map[value];
    }
    cout<<sum<<endl;



    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
