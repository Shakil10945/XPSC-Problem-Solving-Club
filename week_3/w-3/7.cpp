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
        string st, stt;
        cin>> st>>stt;

        if(st == stt)
        {
            cout<< "="<<endl;
        }
        else
        {
            if(st[st.size()-1] == stt[stt.size()-1])
            {
                if(st[st.size()-1] == 'L')
                {
                    if(st.size()> stt.size())
                        cout<< ">"<<endl;
                    else
                        cout<<"<"<<endl;
                }
                else if(st[st.size()-1] == 'S')
                {
                    if(st.size() < stt.size())
                        cout<< ">"<<endl;
                    else
                        cout<<"<"<<endl;
                }
            }
            else
            {
                if(st[st.size()-1] == 'L')
                {
                    cout<<">"<<endl;
                }
                else if(st[st.size()-1] == 'M')
                {
                    if(stt[stt.size()-1] == 'L')
                    {
                        cout<<"<"<<endl;
                    }
                    else
                        cout<<">"<<endl;
                }
                else
                    cout<<"<"<<endl;
            }
        }
    }
    

    
    

    return 0;
}