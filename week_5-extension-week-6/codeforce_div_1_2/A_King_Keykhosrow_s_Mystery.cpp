#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;

        int c;
        for(int i=max(a,b); i<=a*b; i++)
        {
            if(i >= max(a,b) && i%a== i%b)
            {
                c = i;
                break;
            }
        }
        cout<<c<<endl;

    }
    

    
    

    return 0;
}