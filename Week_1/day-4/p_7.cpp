#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int> v(n,0);

    for(int i=0; i<n;i++)
        cin>>v[i];

    long long int sum = accumulate(v.begin(),v.end(), 0LL);

    int odd = INT_MAX;

    if(sum%2==0)        cout<< sum<<endl;
    else
    {
        for(int i=0; i<n;i++)
        {
            if(v[i] < odd && v[i]%2!=0)      odd = v[i];
        }

        cout<<sum-odd<<endl;
    }
    

    return 0;
}