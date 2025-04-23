#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize((n*(n-1))/2);

    for (int i = 0; i < (n*(n-1))/2; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    //cout<<(n*(n-1))/2<<" hi "<<endl;

    set<int>myset;
    for(int x: vec)
        myset.insert(x);
    
    if(myset.size() == n)
    {
        for(auto x: myset)
            cout<<x<<" ";
        cout<<endl;
    }
    else
    {
        int rem = n- myset.size();
        
        for(auto x: myset)
            cout<<x<<" ";
        while (rem--)
        {
            cout<<*myset.rbegin()<<" ";
        }
        cout<<endl;

    }
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