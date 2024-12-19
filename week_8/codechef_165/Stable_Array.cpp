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

        multiset<int> my_set;
        for(int i=0; i<n; i++)
            my_set.insert(ar[i]);
        
        int max_num = *(--(my_set.end()));

        int r=0, l=0;
        int count = 0;

        while (r<n)
        {
            if(ar[r] == max_num)
            {
                count = max(count, r-l);
                l= r+1;
            }
            auto it = my_set.find(ar[r]);
            my_set.erase(it);
            if(!my_set.count(max_num))
            {
                if(!my_set.empty())
                    max_num = *(prev(my_set.end()));
            }
            r++;
        }

        cout<<count<<endl;

    }  

    return 0;
}