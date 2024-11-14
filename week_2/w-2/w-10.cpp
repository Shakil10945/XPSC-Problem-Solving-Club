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
        vector<int> v;
        //set<int>s;

        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }

        deque<pair<int,int>>dq;

        int operation = n-1;

        while (operation--)
        {
            int last = *(v.end()-1);
            int last_1 = *(v.end()-2);
            
            if((last + last_1)%2 == 0)
            {
                dq.push_back({last, last_1});
                
                v.erase(v.end()-1);
                v.erase(v.end()-1);
                v.push_back(((last + last_1))/2);
            }
            else
            {
                if(v.size()>2)
                {
                    
                    int last_2 = *(v.end()-3);
                    dq.push_back({last, last_2});
                    
                    v.erase(v.end()-1);
                    v.erase(v.end()-2);
                    v.push_back(((last + last_2))/2);
                }
            }
            
            
        }

        for(auto &x: v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        //cout<< "ff "<<endl;
        for(auto &x: dq)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        
    }
    

    
    

    return 0;
}