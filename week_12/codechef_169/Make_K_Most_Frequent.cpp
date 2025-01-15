#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin>>n>>k;
    vec.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();

    map<int,int> my_map;
    for(int i=0; i<n; i++)
        my_map[vec[i]]++;
    int maximum = 0;
    for(auto x: my_map)
    {
        maximum = max(maximum, x.second);
    }

    if(my_map[k] == maximum)
    {
        cout<< 0<<endl;
        my_map.clear();
        return;
    }


    else
    {
        if((vec[0] == k) || (vec[n-1] == k))
        {
            cout<<1<<endl;
            return;
        }
        map<int,int>my_map2;
        for(int i=0; i<n; i++)
        {
            if(vec[i] == k)
            {
                int maxx = 0;
                for(int j=i; j<n; j++)
                {
                    my_map2[vec[j]]++;
                    maxx= max(maxx, my_map2[vec[j]]);
                }
                if(maxx == my_map2[k])
                {
                    cout<< 1<<endl;
                    my_map2.clear();
                    return;
                }
                break;
            }
        }
        my_map2.clear();
        for(int i=n-1; i>=0; i--)
        {
            if(vec[i] == k)
            {
                int maxx = 0;
                for(int j=i; j>=0; j--)
                {
                    my_map2[vec[j]]++;
                    maxx= max(maxx, my_map2[vec[j]]);
                }
                if(maxx == my_map2[k])
                {
                    cout<< 1<<endl;
                    my_map2.clear();
                    return;
                }
                break;
            }
        }
        my_map2.clear();
        cout<<2<<endl;
    }    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
