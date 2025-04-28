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
    
    if(is_sorted(vec.begin(),vec.end()))
    {
        cout<<"Yes"<<endl;
        return;
    }

    int l=0, r=1;
    bool check = false;
    int down =0;
    while (r<n)
    {
        while (r<n && vec[r]>=vec[r-1])
        {
            r++;
        }
        if(r<n && vec[r]<vec[r-1])
        {
            check = true;
            down ++;
            //cout<<down<<endl;

            if(down >=2)
            {
                cout<<"No"<<endl;
                return;
            }
            r++;
            while (r<n && vec[r]>=vec[r-1])
            {
                if(vec[r] > vec[l])
                {
                    cout<<"No"<<endl;
                    return;
                }
                r++;
            }
        }
        
    }
    cout<<"Yes"<<endl;
    
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