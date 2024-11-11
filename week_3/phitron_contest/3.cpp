#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> v;
        for(int i=0; i<n;i++)
        {
            int mi, li;
            cin>>mi>>li;

            if(li == l)
            {
                v.push_back(mi);
            }
        }
        if(v.size() < k)        cout<<-1<<endl;
        else
        {
            sort(v.begin(),v.end(), greater<int>());
            cout<< accumulate(v.begin(), v.begin()+ k, 0)<<endl;
        }
    }
    
    

    return 0;
}