#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    int sum = INT_MAX;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        deque<int> cookie(n);
        for(int i=0; i<n; i++)  cin>>cookie[i];

        sort(cookie.begin(), cookie.end());
        while(cookie.size())
        {
            if(cookie[0] < k)
            {
                cookie.pop_front();
                continue;
            }
            break;            
        }
        if(cookie.size())
        {
            for(int i=0; i<cookie.size(); i++)
            {
                cookie[i] = (cookie[i]%k);
            }
            sort(cookie.begin(), cookie.end());
            cout<<cookie.front()<<endl;

        }
        else
        {
            cout<<-1<<endl;
        }


    }
    

    
    

    return 0;
}