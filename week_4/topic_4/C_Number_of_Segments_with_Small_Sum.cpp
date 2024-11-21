#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin>>n>>s;

    vector<int>v(n);
    for(int i=0; i<n; i++)  cin>>v[i];

    int l=0, r=0;
    long long temp_sum = 0;
    long long size = 0;

    while(r<n)
    {
        temp_sum += v[r];

        if(temp_sum<= s)
        {
            size += (r-l+1);
        }
        else
        {
            while(temp_sum > s)
            {
                temp_sum -= v[l];
                l++;                
            }
            size += (r-l+1);            
        }
        r++;
    }
    cout<<size<<endl;

    return 0;
}