#include <bits/stdc++.h>
using namespace std;

int n;
deque<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    sort(vec.begin(),vec.end());
    int i=1;
    while(vec.size()!=1)
    {
        if(i%2)     vec.pop_front();
        else        vec.pop_back();
        i++;
    }
    cout<<*vec.begin()<<endl;
    
    
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