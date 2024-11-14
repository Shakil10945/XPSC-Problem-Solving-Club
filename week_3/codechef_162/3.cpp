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
        int n,m;
        cin>>n>>m;
        string str1, str2;
        for(int i=0;i<n; i++)
        {
            char c;
            cin>>c;
            str1+=c;
        }
        for(int i=0; i<m;i++)
        {
            char c;
            cin>>c;
            str2+=c;
        }

        int a = -1;
        int a_end = -1;

        for(int i=0; i<min(m,n);)
        {
            if(!str1.empty() && !str2.empty())
            {
                if(str1[i] == 'b' && str2[i] == 'b')
                {
                    str1.erase(i, 1);
                    str2.erase(i,1);
                    m--;
                    n--;

                }
                else
                {
                    i++;
                }
            } 
        }
        if(n == 0 && m==0)
        {
            cout<<"YES"<<endl;
        }
        else if(n>0 && m>0)
        {
            if(str1[0] != str2[0])
            {
                cout<<"NO"<<endl;
            }
            else
            {
                if(count(str1.begin(), str1.end(),'a') == count(str2.begin(), str2.end(),'a'))      //&& count(str1.begin(), str1.end(),'b') == count(str2.begin(), str2.end(),'b')
                {
                    cout<<"YES"<<endl;
                }
                else        cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    

    
    

    return 0;
}