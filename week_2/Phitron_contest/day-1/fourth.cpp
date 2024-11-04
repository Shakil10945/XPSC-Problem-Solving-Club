#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;  cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        string st,stt;  cin>>st>>stt;

        int chef=0;
        int chefina=0;

        for(int i=0;i<n;i++)
        {
            if(st[i] == stt[i]) continue;

            else if((st[i] == 'R' && stt[i]=='S') ||
            (st[i] =='P' && stt[i]== 'R') ||
            (st[i] =='S' && stt[i]== 'P'))
            {
                chef++;
            }
            
            else
            {
                chefina++;
            }
        }

        if(chefina-chef<0)
        {
            cout<<0<<endl;
        }
        else if(chefina - chef ==0)     cout<<1<<endl;
        else    cout<<((chefina-chef)/2)+1<<endl;

        //cout<<"Cheff"<<chef<<" "<<"Chefina"<< chefina<<endl;
    }
    
    

    return 0;
}