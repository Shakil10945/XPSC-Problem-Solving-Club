#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;
vector<int> vec2;

void input()
{
    cin >> n>>k;
    vec.resize(n);
    vec2.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];
    
}

void solve()
{
    input();
    int minn = *min_element(vec.begin(), vec.end());
    int maxx = *max_element(vec.begin(), vec.end());
    int count_minus = count(vec2.begin(), vec2.end(), -1);
    if(count_minus == n)
    {
        
        cout<< minn+k - maxx +1 <<endl;
        return;
    }

    set<int> myset;
    set<int> myset2;

    for(int i=0;i<n;i++)
    {
        if(vec2[i] != -1)
        {
            myset.insert(vec[i] + vec2[i]);
        }
        else
            myset2.insert(vec[i]);
    }
    if(myset.size()>1)  cout<<0<<endl;
    else
    {
        if((!myset.empty() && *myset.rbegin() > (minn+k)) || (!myset2.empty() && !myset.empty() && (*myset2.rbegin() > *myset.begin())))  cout<<0<<endl;
        else
            cout<<1<<endl;
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