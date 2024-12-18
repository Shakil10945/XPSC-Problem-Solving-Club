#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;  cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        vector<int>ar(n);
        for(int i=0; i<n; i++)  cin>>ar[i];

        set<int> my_set;        map<int, int> my_map;
        for(int i=0; i<n; i++)
        {
            my_set.insert(ar[i]);
            my_map[ar[i]]++;
        }
        
        int max_num = *my_set.rbegin();

        int r=0, l=0;
        int count = 0;

        while (r<n-1)
        {
            if(ar[r] == max_num)
            {
                count = max(count, r-l);
                max_num = max_elements(ar.begin()+r, ar.end());
            }
        }

        cout<<count<<endl;

    }  

    return 0;
}