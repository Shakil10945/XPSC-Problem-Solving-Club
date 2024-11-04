#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    while (n--)
    {
        string st;      cin>>st;

        if(st.size()==1)
        {
            if(st.back()<'z')
            {
                st+=st.back()+1;
            }
            else
            {
                st+="a";
            }
            cout<<st<<endl;
            continue;
        }
        bool found = false;

        string stt;

        for(int i=0; i<st.size()-1; i++)
        {
            if(st[i]== st[i+1])
            {
                stt += st.substr(0,i+1);
                if(stt.back()<'z')       stt+=stt.back()+1;
                else                    stt+='a';
                stt+=st.substr(i+1);
                found = true;
                break;
            }
        }
        if(!found)
        {
            stt += st;
            if (stt.back() < 'z') 
            {
                char p = stt.back()+1;
                stt += p;
            } else 
            {
                char l = 'a';
                stt.push_back(l);
            }
        }


        cout<< stt<<endl;
    }
    
    

    return 0;
}