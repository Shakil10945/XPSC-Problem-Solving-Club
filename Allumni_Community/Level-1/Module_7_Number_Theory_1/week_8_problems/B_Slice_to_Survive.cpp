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
        long long n,m,a,b;
        cin>>n>>m>>a>>b;

        long long up = (a-1)*m;
        long long down = (n-a)*m;

        long long left = (b-1)*n;
        long long right = (m-b)*n;

        long long total = n*m;
        total-=max({up, down,left,right});
        int x =1;
        

        
        while (total>1)
        {
            if(total%2==0)
                total/=2;
            else if(total%2==1)
                total = ceil((double)total/2);
            x++;
        }
        if(n==m && a==b && (ceil(double(a)/2==n)))
            x++;
        cout<<x<<endl;

        

        

    }

    return 0;
}

