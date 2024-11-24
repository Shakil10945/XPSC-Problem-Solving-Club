#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin>>t;
    while (t--)
    {
        int n, s;
        cin>>n>>s;
        vector<int>ar(n);
        for(int i=0; i<n; i++)  cin>>ar[i];

        long long sum = accumulate(ar.begin(), ar.end(), 0);

        
    }
    

    
    

    return 0;
}