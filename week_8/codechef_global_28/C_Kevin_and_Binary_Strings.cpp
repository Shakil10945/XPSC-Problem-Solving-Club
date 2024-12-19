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
        string str;
        cin>>str;

        if(str.size() == 1)
        {
            cout<<1<<" "<<1<<" "<<1<< " "<<1<< endl;
            continue;   
        }
        int s = 0;
        int z=0;
        bool check = false;
        bool one_check = false;
        int c = 0;
        
        for(int i=0; i<str.size(); i++)
        {
            if(check)
            {
                z++;
                continue;
            }
            if(str[i] == '0' && !check)
            {
                s = i;
                check = true;
                while (i<str.size() && str[i] == '0')
                {
                    c++;
                    i++;
                }
                i--;                
            }
        }
        if(!check)
        {
            cout<<1<<" "<< str.size()<<" "<<1<<" "<<1<<endl;
            continue;
        }  
        if(s-c< 0)
        {
            cout<<1<<" "<<str.size()-s<<" ";
        }
        else
        {
            cout << s - c + 1<< " "
                 <<s - c + 1 + z <<" ";
        }
        cout<<1<<" "<<str.size()<<endl;   
    }
    return 0;
}