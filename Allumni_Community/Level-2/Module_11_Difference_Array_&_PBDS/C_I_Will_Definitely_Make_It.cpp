#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
       cin >> vec[i];
    
}

void solve()
{
    input();
    k--;
    int maxx = *max_element(vec.begin(),vec.end());
    if(vec[k]== maxx)
    {
        cout<<"YES"<<endl;
        return;
    }

    set<int>st;
    for(auto x: vec)
    {
        if(x>(vec[k]))
        {
            st.insert(x);
        }
    }
    int d = vec[k]-1+1; 
    for(auto x: st)
    {
        if(x-vec[k] > d)
        {
            cout<<"NO"<<endl;
            return;
        }
        vec[k] = x;

    }
    cout<<"YES"<<endl;
    
    
    
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