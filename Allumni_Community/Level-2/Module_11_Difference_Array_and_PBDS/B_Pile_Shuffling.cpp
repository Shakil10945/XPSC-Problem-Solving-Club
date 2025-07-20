#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> vec;
long long zero_reqq = 0;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        int a, b, c,d;
        cin>>a>>b>>c>>d;

        if(a>c)
        {
            zero_reqq +=(a-c);
            a = c;
        }

        
        vec[i].push_back(a);
        vec[i].push_back(b);
        vec[i].push_back(c);
        vec[i].push_back(d);
    }
    
}

void solve()
{
    input();

    // for(auto x: vec)
    // {
    //     for(auto xx: x)
    //         cout<<xx<<" ";
    //     cout<<endl;
    // }


    long long req = 0;
    for(int i=0; i<n; i++)
    {
        int a, b, c, d;
        a = vec[i][0];
        b = vec[i][1];
        c = vec[i][2];
        d = vec[i][3];

        if(d<b)
        {
            req +=((a) + (b-d));
            
        }
        
    }
    //cout<<zero_reqq<<endl;
    req+=zero_reqq;
    cout<<req<<endl;

    zero_reqq=0;
    vec.clear();
    
    
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