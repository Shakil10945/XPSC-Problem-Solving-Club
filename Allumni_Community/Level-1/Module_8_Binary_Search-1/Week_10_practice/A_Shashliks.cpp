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
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;

        if(x>y)
        {
            swap(x,y);
            swap(a,b);
        } //swap(a,b);

        int cnt = 0;
        if(k>=a)
        {
            cnt+=(k-a)/x;
            k -= ((k-a)*x);
            
        }
        if(k>=a && k>=x)
        {
            cnt++;
            k-=x;
        }
        if(k>=b)
        {
            cnt+=(k-b)/y;
            k -= ((k-b)*y);
        }
        if(k>=y && k>=b)
        {
            cnt++;
            k-=y;
        }

       
        
        

        cout<<cnt<<endl;
    }

    return 0;
}

