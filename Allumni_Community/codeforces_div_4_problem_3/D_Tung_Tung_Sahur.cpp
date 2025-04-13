#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string p,s;
        cin>>p>>s;

        vector<int>pL,sL;
        vector<int>pR, sR;

        for(int i=0;i<p.size(); i++)
        {
            if(p[i] == 'L')
            {
                int x = 0;
                while (i<p.size() && p[i] == 'L')
                {
                    i++;
                    x++;
                }

                pL.push_back(x);
                i--;
                //continue;                
            }
            if(p[i] == 'R')
            {
                int x = 0;
                while (i<p.size() && p[i] == 'R')
                {
                    i++;
                    x++;
                }

                pR.push_back(x);
                i--;
                //continue;                
            }
        }
        for(int i=0;i<s.size(); i++)
        {
            if(s[i] == 'L')
            {
                int x = 0;
                while (i<s.size() && s[i] == 'L')
                {
                    i++;
                    x++;
                }

                sL.push_back(x); i--;
                //continue;                
            }
            if(s[i] == 'R')
            {
                int x = 0;
                while (i<s.size() &&  s[i] == 'R')
                {
                    i++;
                    x++;
                }

                sR.push_back(x); i--;
                //continue;                
            }
        }
        // cout<<"pL : ";
        // for(auto x: pL)
        //     cout<<x<<" ";
        // cout<<endl;
        // cout<<"sL : ";
        // for(auto x: sL)
        //     cout<<x<<" ";
        // cout<<endl;
        // cout<<"pR : ";
        // for(auto x: pR)
        //     cout<<x<<" ";
        // cout<<endl;
        // cout<<"sR : ";
        // for(auto x: sR)
        //     cout<<x<<" ";
        // cout<<endl;
        if(pL.size() != sL.size() || pR.size() != sR.size())
        {
            //cout<<"x";
            cout<<"NO"<<endl;
            continue;
        }
        bool check = false;
        for(int i=0; i<pL.size(); i++)
        {
            if(!((pL[i]<= sL[i]) && (sL[i] <= 2*pL[i])))
            {
                cout<<"NO"<<endl;
                check = true;
                break;
            }
        }
        for(int i=0; i<pR.size(); i++)
        {
            if(!((pR[i]<= sR[i]) && (sR[i] <= 2*pR[i])))
            {
                cout<<"NO"<<endl;
                check = true;
                break;
            }
        }
        if(!check)
            cout<<"YES"<<endl;
    }

    return 0;
}

