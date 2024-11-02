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
        int n,k;
        cin>>n>>k;

        // vector<int> brand(k);
        // vector<int> cost(k);

        priority_queue<int> cost;


        for(int i=0; i<k; i++)
        {
            int brand,c;
            cin>>brand>> c;
            cost.push(c);
        }

        long long int maxx = 0;
        while (n-- && !cost.empty())
        {
            maxx+=cost.top();
            cost.pop();
        }
        cout<<maxx<<endl;
    }
    
    

    return 0;
}