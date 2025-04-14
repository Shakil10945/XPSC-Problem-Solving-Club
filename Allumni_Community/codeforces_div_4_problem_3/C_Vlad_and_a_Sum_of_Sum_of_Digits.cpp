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
        int n;
        cin>>n;
        long long sum =0;
        for(int i=1; i<=n; i++)
        {
            int x =i;
            while (x>0)
            {
                sum+=x%10;
                //cout<<x%10<<" ";
                x/=10;
            }            
        }

        cout<<sum<<endl;
        
    }

    return 0;
}

