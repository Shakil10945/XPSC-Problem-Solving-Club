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
    if(n==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    int x=-1, y=-1;
    for(int i=1; i<n; i++)
    {
        if(vec[i]<vec[i-1])
        {
            x = vec[i];
            y = vec[i-1];
            break;
        }
    }

    if(x==-1 && y==-1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

    cout<<2<<endl;
    cout<<y<<" "<<x<<endl;
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