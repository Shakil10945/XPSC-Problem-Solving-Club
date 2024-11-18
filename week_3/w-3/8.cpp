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
        string str;
        cin>>str;
                
        vector<int> scope_chilo;
        vector<int> but_dhukaiche;
        
        long long int sum = 0;
        for(int i=0; i<n; i++)
        {
            if(str[i] == 'L')
                sum += i;
                
            else if(str[i] == 'R')
                sum += n-i-1;
            
            if(i< (n/2))
            {
                if(str[i] != 'R')
                {
                    scope_chilo.push_back(n-i-1);
                    but_dhukaiche.push_back(i);
                }
            }
            
            if(n%2 != 0)
            {
                if(i> (n/2))
                {
                    if(str[i] != 'L')
                    {
                        scope_chilo.push_back(i);
                        but_dhukaiche.push_back(n-i-1);
                    }
                }
            }
            else
            {
                if(i>= (n/2))
                {
                    if(str[i] != 'L')
                    {
                        scope_chilo.push_back((i));
                        but_dhukaiche.push_back(n-i-1);
                    }
                }
            }
        }
        sort(scope_chilo.begin(), scope_chilo.end());
        sort(but_dhukaiche.begin(), but_dhukaiche.end());

        vector<long long int>prefix_sum;
        
        for(int i=0; i<n;i++)
        {
        	if(!scope_chilo.empty())
        	{
                sum = (sum - but_dhukaiche[0] + scope_chilo[scope_chilo.size()-1]);
                prefix_sum.push_back(sum);
                but_dhukaiche.erase(but_dhukaiche.begin());
                scope_chilo.erase(--(scope_chilo.end()));
                continue;        		
        	}
        	prefix_sum.push_back(sum);
        	            
        }
        for(int i=0; i<n; i++)
        {
        	cout<<prefix_sum[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}