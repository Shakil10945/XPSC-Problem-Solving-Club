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

        if(accumulate(v.begin(), v.end(), 0) %2==0)    size=n;
        else
        {
            int left_most_odd = -1;
            int right_most_odd = -1;

            for(int i=0; i<n; i++)
            {
                if(v[i]%2 != 0)
                {
                    if(left_most_odd==-1)
                    {
                        left_most_odd = i;
                    }
                    right_most_odd = i;
                }
            }

            size = max(n-left_most_odd-1 , right_most_odd);               
        }
        cout<<size<<endl;      
    }
    return 0;
}