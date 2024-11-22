#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; long long k;
    cin>>n>>k;
    vector<long long> ar(n);
    for(int i=0; i<n; i++)  cin>>ar[i];

    int l=0, r=0;
    long long sub_size = 0;
    multiset<long long> my_set;
    long long sub_dif = 0;

    while (r<n)
    {
        my_set.insert(ar[r]);

        if(*my_set.rbegin() - *my_set.begin() <=k)
        {
            sub_size += r-l+1;
        }
        else
        {
            while (*my_set.rbegin() - *my_set.begin() >k)
            {
                my_set.erase(my_set.find(ar[l]));
                l++;
            }
            sub_size += r-l+1;            
        }
        r++;
    }
    cout<<sub_size<<endl;   
    

    return 0;
}