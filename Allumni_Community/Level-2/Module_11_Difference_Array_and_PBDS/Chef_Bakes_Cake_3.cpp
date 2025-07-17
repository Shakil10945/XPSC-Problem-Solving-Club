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
    
    int ans = 0;
    int x = 1;
    while (x<=100)
    {
        int xx = 0;
        for(int i=0; i<n; i++)
        {
            if(x<=vec[i])
            {
                xx+=(x*20);
                //cout<<"hi"<<endl;
            }   
            else
            {
                xx+=(vec[i]*20);
                xx-=((x-vec[i])*30);
                //cout<<"NO"<<endl;
            }
                

        }
        ans = max(ans , xx);
        x++;
        
        //cout<<x<<endl;
    }
    cout<<ans<<endl;
    
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