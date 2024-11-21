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
        vector<int> ar(n);
        vector<int> br(n);
        for(int i=0; i<n;i++)
        {
            cin>>ar[i];
        }   
        for(int i=0; i<n;i++)
        {
            cin>>br[i];
        }   
        
        int maxx = 0;
        int sec_maxx = 0;
        int max_index = -1;
        int sec_max_index = -1;
        for(int i=0; i<n; i++)
        {
            if(ar[i] > maxx)
            {
                maxx = ar[i];
                max_index = i;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(ar[i] > sec_maxx && ar[i] < maxx)
            {
                sec_maxx = ar[i];
                sec_max_index = i;
            }
        }
    
        
        
        
        //cout<< max_index<<" " <<sec_max_index;
        
        int ax = max(ar[max_index], br[max_index]);
        int bx = max(ar[sec_max_index], br[sec_max_index]);

        cout<< ax<< " "<<bx<<" ";
        if((ax > bx) || (bx>ax))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        
    }

    return 0;
}