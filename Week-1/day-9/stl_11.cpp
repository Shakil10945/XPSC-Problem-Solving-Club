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

        else
        {
            bool found = false;

            string stt;

            for(int i=0; i<st.size()-1; i++)
            {
                if(st[i]== st[i+1])
                {
                    stt += st.substr(0,i+1);
                    if(stt.back()<'z')       stt+=stt.back()+1;
                    else                    stt+='a';
                    stt+=st.substr(i+1, st.size()-i-1);
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                if(st.back()<'z')
                {
                    stt += st;
                    stt += st.back()+1;
                }
                else
                {
                    stt+=st;
                    stt.push_back('a');
                }
            }
            cout<< stt<<endl;

        }
    }
    
    

    return 0;
}