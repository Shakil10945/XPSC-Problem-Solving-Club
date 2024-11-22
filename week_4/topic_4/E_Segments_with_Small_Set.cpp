#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0; i<n; i++)  cin>>ar[i];

    map<int, int> my_map;
    long long sub_array = 0;
    int l=0;
    int  r=0;
    while (r<n)
    {
        
        my_map[ar[r]]++;
                
        if(my_map.size() <= k)
        {
            //cout<<" L "<<l <<" R "<<r<<" ||||";
            sub_array += r-l+1;
        }
        
        
        else
        {
            while (my_map.size() > k)
            {
                my_map[ar[l]]--;
                if(my_map[ar[l]] == 0)
                    my_map.erase(ar[l]);
                l++;
            }
            sub_array += r-l+1;     
            // my_map.erase(my_set.find(ar[l]));
            // l++;
            // cout<<" INside  else ";
            // cout<<" L "<<l <<" R "<<r<<" ||||";
            //continue;
            //sub_array += r-l+1;
            // while(my_set.size()>=k)
            // {
            //     my_set.erase(my_set.find(ar[l]));
            //     l++;
            // }
        }
        // for(auto x: my_set)
        //     cout<<x<< " ";
        //cout<< " Size "<<sub_array<<endl;
        
        r++;
    }
    cout<<sub_array<<endl;    

    return 0;
}