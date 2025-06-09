#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

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

    vector<int> vecl=vec, vecr = vec;
    int l = INT_MAX, r= INT_MAX;
    for(int i=0; i<n; i++)
    {
        int left = i+1, right = n-(i+1)+1;
        if(vecl[i]%left)
            l = min(l, (vecl[i]/left));
        if(vecr[i]%right)
            r = min(r, (vecr[i]/right));
    }

    for(int i=0; i<n; i++)
    {
        vecl[i] = (vecl[i]/l);
        vecr[i] = (vecr[i]/r);
    }

    bool checkl = false, checkr = false;
    set<int> stl, str;
    for(int i=0; i<n; i++)
    {
        int left = i+1, right = n-(i+1)+1;
        if(vecl[i]%right == 0)
        {
            stl.insert(vecl[i]/r);
        }
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