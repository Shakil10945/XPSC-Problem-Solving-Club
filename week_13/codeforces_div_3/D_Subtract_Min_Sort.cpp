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
    int dd = 0;
    for(int i=0;i<n-1; i++)
    {
        if(vec[i]>vec[i+1])
        {
            dd=1;
            break;
        }
    }
    if(dd=0)
    {
        cout<<"YES"<<endl;
        return;
    }
    int x =0;
    

    for(int i=0; i<n-1; i++)
    {
        if(vec[0]<vec[1])
        {
            x++;
        }
        else
        {
            break;
        }
    }
    if(x)   cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;

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