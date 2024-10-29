#include <bits/stdc++.h>
#include <numeric>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n,0);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        long long int summation = 0;
        int size = 0;

        for(int i=1;i<=n;i++)
        {
            for(int j=0; j<=n-i; j++)
            {
                int s = accumulate(v.begin() + j, v.begin() +j +i , 0);

                if(s%2==0 && (summation < s))
                {
                    summation = s;
                    size = i;
                }
            }
        }
        cout<< size<<endl;
        
    }

    return 0;
}