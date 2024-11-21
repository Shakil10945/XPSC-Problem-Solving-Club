#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int s;
    cin>>n>>s;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin>>ar[i];
    
    int l=0, r=0, t_number=0;
    long long int sub_sum = 0;
    
    while(r<n)
    {
        sub_sum+=ar[r];
        if(sub_sum <= s)
            t_number = max((r-l+1), t_number);
        else
        {
            sub_sum -= ar[l];
            l++;
        }
        r++;
    }
    cout<<t_number<<endl;
    return 0;
}