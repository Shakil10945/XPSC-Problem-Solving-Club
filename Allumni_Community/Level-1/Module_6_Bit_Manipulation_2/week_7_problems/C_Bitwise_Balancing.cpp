#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;  cin>>a>>b>>c;
        
        int maxx = max({__bit_width(a), __bit_width(b), __bit_width(c)});
        bool check = true;
        int j = 0;
        for(int i=0; i<(1<<maxx); i++)
        {
            
            //cout<<j<<" ";
            if(((a|j)- (b&j)) ==c)
            {
                cout<<j<<endl;
                check = false;
                break;
            }
            j+=(1<<i);
        }
        if(check)   cout<<-1<<endl;
    }
    return 0;
}

