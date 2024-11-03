#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin>>t;
    while (t--)
    {
        string st;
        cin>>st;

        deque<pair<char, bool>> dq;

        vector<int> low;
        vector<int> up;

        int cnt=0;

        for(int i=0;i<st.size();i++)
        {
            dq.push_back({st[i],true});
            if(st[i] != 'b' || st[i] !='B')
            {
                if(islower(st[i]))  low.push_back(i);
                if(isupper(st[i]))  up.push_back(i);
            }

            else if(st[i]=='b')
            {
                if(!low.empty())
                {
                    auto it = dq.begin() + low.back();
                    it->second = false;
                    low.pop_back();
                }
            }
            else if(st[i]=='B')
            {
                if(!up.empty())
                {
                    auto it = dq.begin()+up.back();
                    it->second = false;
                    up.pop_back();
                }
            }
            
        }
        for(auto d: dq)
        {
            if(d.second == true && (d.first !='B' && d.first !='b'))       cout<<d.first;
            //cout<<d.first;
        }
        cout<<endl;
    }
    
    

    return 0;
}