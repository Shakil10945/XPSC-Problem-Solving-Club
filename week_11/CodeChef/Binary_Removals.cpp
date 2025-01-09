#include <bits/stdc++.h>
using namespace std;

int n,x,k;
string str;

void input()
{
    cin>>n>>x>>k;
    cin>>str;
}

void solve()
{
    input();

    int l=0, r=0;
    int count = 0;
    int one =0;
    int zero = 0;


    while(true)
    {
        for(int i=0; i<n; i++)
        {
            if(str[i] =='1')
            {
                one++;
                
            }
            else
                zero++;

            
        }
    }
    

    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
