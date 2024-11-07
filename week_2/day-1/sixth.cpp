#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string str;
        cin>>str;

        vector<char>v;

        for(int i=0; i<n;i++)
        {
           v.push_back(str[i]);
        }
        for(int i=0;i<n-2;i+=3)
        {
            string st = str.substr(i,3);

            if(st>"100")
            {
                v[i]='1';
                v[i+1]='0';
                v[i+2] = '0';
            }

        }

        for(int i=0;i<n;i++)
            cout<<v[i];
        cout<<endl;
    }
    
    

    return 0;
}