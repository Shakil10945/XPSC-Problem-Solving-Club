#include <bits/stdc++.h>
using namespace std;

int n=10;
vector<string> vec;

void input()
{
    //cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    
}

void solve()
{
    input();

    int x = 0;

    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(vec[i][j] == 'X')
            {
                //cout<<i<<" "<<j<<endl;
                if((i==0 || i==9) || (j==0 || j==9))
                    x++;
                else if((i==1 || i==8) || (j==1 || j==8))
                    x+=2;
                else if((i==2 || i==7) || (j==2 || j==7))
                    x+=3;
                else if((i==3 || i==6) ||(j==3 || j==6))
                    x+=4;
                else
                    x+=5;
            }
            
        }
        
    }
    cout<<x<<endl;
    
    
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