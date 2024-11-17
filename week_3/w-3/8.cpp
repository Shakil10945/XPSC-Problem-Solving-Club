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

        set<pair<int, int>> my_set;

        for(int i=0; i<n; i++)
        {
            if(n%2 != 0)
            {
                if(i< (n/2))
                {
                    if(str[i] != 'R')
                    {
                        my_set.insert({(n-i-1), i});
                    }
                }
                else if(i> (n/2))
                {
                    if(str[i] != 'L')
                    {
                        my_set.insert({i, i});
                    }
                }

            }
            else
            {
                if(i < (n/2))
                {
                    if(str[i] != 'R')
                    {
                        my_set.insert({(n-i-1), i});
                    }
                }
                else
                {
                    if(str[i] != 'L')
                    {
                        my_set.insert({i, i});
                    }
                }
            }
        }
        for(int i=0; i<n;i++)
        {
            
        }
    }
    

    
    

    return 0;
}