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
        bool check = false;
        int x =0;
        for(int i=0; i<31; i++)
        {
            if(((c>>i)&1) && ((b>>i)&1) && (!((a>>i)&1)))
            {
                cout<<-1<<endl;
                check = false;
                break;
            }
            if((!((c>>i)&1)) && (!((b>>i)&1)) && (((a>>i)&1)))
            {
                cout<<-1<<endl;
                check = false;
                break;
            }

        }
        
        if((a|(b|c))- (b & (b|c)) == c) cout<<(b|c)<<endl;
        else   cout<<-1<<endl;
    }
    return 0;
}

