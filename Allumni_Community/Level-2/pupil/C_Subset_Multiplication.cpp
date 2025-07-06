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
    bool ch = true;
    for(int i=1; i<n; i++)
    {
        if(vec[i]%vec[i-1]!=0)
        {
            ch = false;
            break;
        }
    }
    if(ch)
    {
        cout<<1<<endl;
        return;
    }

    int lx = 1;
    int gx = 0;
    bool anV = false;

    for(int i=0; i<n-1; i++)
    {
        int bi = vec[i];
        int bi1 = vec[i+1];
        if(bi1%bi !=0)
        {
            int g = __gcd(bi, bi1);
            int u = bi/g;

            if(!anV)
            {
                lx = u;
                gx= bi;
                anV = true;
            }
            else
            {
                int gL = __gcd(lx,u);
                int temp =lx/gL*u;
                lx = temp;
                gx = gcd(gx, bi);
            }
        }
    }
    if(!anV)
        cout<<1<<endl;
    else
        cout<<lx<<endl;



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