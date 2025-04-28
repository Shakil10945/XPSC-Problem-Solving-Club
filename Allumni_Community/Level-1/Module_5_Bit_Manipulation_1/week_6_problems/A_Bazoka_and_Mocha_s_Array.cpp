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
    
    int pos =-1;
    for(int i=0; i<n-1;i++)
    {
        if(vec[i] > vec[i+1])
        {
            pos = i;
            break;
        }
    }

    if(pos ==-1)
    {
        cout<<"Yes"<<endl;
        return;
    }
    
    else
    {
       // cout<<pos<<endl;
        bool check = false;

        for(int i=pos+1; i<n; i++)
        {
            if(i==n-1)
            {
                if(vec[i]>vec[0])
                {
                    check = true;
                }
                continue;
            }
            if(vec[i]> vec[i+1])
            {
                check = true;
            }
        }
        if(check) cout<<"No"<<endl;
        else      cout<<"Yes"<<endl;

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