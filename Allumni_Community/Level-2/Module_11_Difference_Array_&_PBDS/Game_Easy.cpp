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
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    
    for(int j=1; j<=n*2; j++)
    {
        int sum =0;
        int x = 0;
        int d = j;
        for(int i=0; i<n; i++)
        {
            if(d>=2)
            {
                if(i<n-1)
                {
                    if(x<vec[i+1])
                    {
                        sum+=vec[i];
                        x++;
                        d--;
                    }
                    else
                    {
                        sum+=(vec[i]+x);
                        x++;
                        d-=2;
                    }
                }
                else
                {
                    sum+=(vec[i]+x);
                    x++;
                    d-=2;
                }
            }
            else
            {
                sum+=vec[i];
                x++;
                d--;
            }
            if(d<=0)
            {
                cout<<sum<<" ";
                break;
            }
        }
    }
    cout<<endl;
    
    
    
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