#include <bits/stdc++.h>
using namespace std;

int n,k;
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
    
    int score = 0;
    
    sort(vec.begin(),vec.end());

    map<int,int>my_map;
    
    for(int i=0;i<n; i++)
    {
        //if(vec[i]>=k)   break;
        my_map[vec[i]]++;
    }

    for(int i = 0;i<n; i++)
    {
        int x = k - vec[i];
        if(my_map[x])
        {
            score++;
            my_map[x]--;
            if(my_map[x]==0)
            {
                my_map.erase(x);
            }
        }
    }
    cout<<score/2<<endl;
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