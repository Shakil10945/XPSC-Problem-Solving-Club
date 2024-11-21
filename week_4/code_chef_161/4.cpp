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
        int n, k;   cin>>n>>k;
        vector<int> v(n);
        for(int i=0 ;i<n;i++)   cin>>v[i];
        
        int mid =0;
        int x = 0;
        if(n%2 == 0)
        {
            x = v[n/2 -1] + v[n/2]; 
        }
        else
        {
            x = v[0] + v[n/2];
        }
        if(x %2 == 0)   mid = x/2;
        else            mid = x/2+1;

        vector<int> c;
        for(int i=0; i<n; i++)
        {
            c.push_back(abs(mid - v[i]));
        }
        sort(c.begin(), c.end());
        cout<<"MId "<<mid<<" ";

        for(int i=0; i<k ; i++)
        {
            c.pop_back();
        }
        cout<<c.back()<<endl;
    }
    

    
    

    return 0;
}