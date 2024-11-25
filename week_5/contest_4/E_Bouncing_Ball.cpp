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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)  cin>>v[i];

        long long sum = accumulate(v.begin(), v.end(), 0);

        long long temp_sum = 0;

        int way = 0;

        for(int i=0; i<n; i++)
        {
            if(temp_sum> (sum/2 +1))    break;            
            if(sum%2 == 0)
            {
                if(temp_sum == (sum/2))
                {
                    if(v[i] == 0)
                    {
                        while (v[i] == 0)
                        {
                            way+=2;
                            i++;
                        } 
                    }                    
                }
            }
            else
            {
                if(temp_sum == (sum/2) || temp_sum == (sum/2)+1)
                {
                    if(v[i] == 0)
                    {
                        while (v[i] == 0)
                        {
                            way+=1;
                            i++;
                        }
                    }
                }
            }
            temp_sum += v[i];
        }
        cout<<way<<endl;
    }
    

    
    

    return 0;
}