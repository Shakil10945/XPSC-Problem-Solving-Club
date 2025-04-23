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
    set<int>myset;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(vec[i] - vec[j])>1)
            {
                int x = 0;
                for(int k = min(vec[i], vec[j])+1; k<max(vec[i], vec[j]);k++)
                {
                    myset.insert(k);
                }
            }
        }
    }
    cout<<myset.size()<<endl;
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