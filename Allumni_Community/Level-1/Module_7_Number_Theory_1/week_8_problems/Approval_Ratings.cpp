#include <bits/stdc++.h>
using namespace std;

int n = 5;
vector<int> vec;

void input()
{
    //cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    sort(vec.begin(),vec.end());
    int sum = accumulate(vec.begin(),vec.end(),0);

    if(sum>=35)
    {
        cout<<0<<endl;
    }
    
    else
    {
        int x =0;
        int d =5;
        while(d--)
        {
            if(sum>=35)
            {
                cout<<x*100<<endl;
                return;
            }
            sum+=(10-vec[x]);
            x++;
        }
        
        //cout<<((35-sum+9)/10)*100<<endl;
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