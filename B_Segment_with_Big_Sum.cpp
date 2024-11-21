#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int s;
    int n;   cin>>n>>s;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];

    int l=0, r=0, size = INT_MAX;

    long long int temp_sum = 0;
    bool check = false;

    //cout<<"s-->"<<s<<endl;

    bool r_check = false;

    while (r<n)
    {
        if(!r_check)
            temp_sum +=  v[r];

        if(temp_sum >= s && l<=r)
        {
            
            check = true;
            size = min(r-l+1, size);
            //cout<<"Temp sum -->: "<<temp_sum<<" r "<<r <<" l "<<l<<" Size--> "<<size<< endl;

            temp_sum -= v[l];
            l++;
            r_check = true;
        }
        else
        {
            r++;
            r_check = false;
        }
            
    }
    if(check)   cout<<size<<endl;
    else        cout<<-1<<endl;    

    return 0;
}