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

        vector<char> s(n);
        vector<char> k(26);
        vector<char> s2(n);
        for(int i=0; i<n; i++)            cin>>s[i];        
        for(int i=0; i<26; i++)           cin>>k[i];        
        for(int i=0; i<n; i++)            s2[i] = s[i];
        sort(s2.begin(), s2.end());

        bool check =false;
        int count= 0;


        for(int i=0; i<n; i++)
        {
            if(s[i] != s2[i])
            {
                
                count++;
                for(int j=0; j<26; j++)
                {
                    if(k[j] == s[i])
                    {
                        int x = 25 - j;
                        s[i] = k[x];

                        if(s2[i] != s[i])
                        {
                            check = true;
                        }
                        break;
                    }
                }                
            }
        }
        if(check)
            cout<<-1<<endl;
        else
            cout<<count<<endl;         
    }  

    return 0;
}