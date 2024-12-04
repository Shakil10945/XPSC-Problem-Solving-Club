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
        int n,x;    cin>>n>>x;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        long long sum = 0;
        vector<long long int> sum_vector(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            sum += (a[i] * b[i]);

            sum_vector[i] = (a[i] * b[i]);
        }

        if(sum<x)
            cout<< -1 <<endl;
        
        else
        {
            sort(sum_vector.begin(), sum_vector.end(), greater<int>());

            long long s = 0;

            for(int i=0; i<n; i++)
            {
                s += sum_vector[i];

                if(s>= x)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
       

        
    }

    return 0;
}