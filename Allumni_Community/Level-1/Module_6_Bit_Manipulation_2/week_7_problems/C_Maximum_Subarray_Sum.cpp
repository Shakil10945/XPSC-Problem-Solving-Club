#include <bits/stdc++.h>
using namespace std;

long long n, k;
vector<long long> vec;
string str;

void input()
{
    cin >> n>>k;
    vec.resize(n);
    cin>>str;

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int zero = count(str.begin(),str.end(), '0');
    long long sum = accumulate(vec.begin(),vec.end(), 0LL);

    // if(sum==k)
    // {
    //     cout<<"YES"<<endl;
    //     for(auto x: vec)
    //         cout<<x<<" ";
    //     cout<<endl;
    //     return;
    // }
    vector<int>prefix_sum(n);
    prefix_sum[0] = vec[0];
    for(int i=1; i<n; i++)
    {
        prefix_sum[i] = vec[i] + prefix_sum[i-1];
    }

    if(zero==0)
    {
        for(int i=0; i<n; i++)
        {
            if(prefix_sum[i] > k)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        if(*max_element(prefix_sum.begin(),prefix_sum.end()) == k)
        {
            cout<<"YES"<<endl;
            for(auto x: vec)
                cout<<x<<" ";
            cout<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }        
    }
    else
    {
        long long temp_sum = 0;
        int l =0, r=0;
        while (r<n)
        {
            temp_sum+=vec[r];
            if(temp_sum>k)
            {
                cout<<"NO"<<endl;
                return;
            }
            if(str[r]=='0')
            {
                temp_sum =0;
            }
            r++;
        }
        long long t_sum = 0;
        temp_sum = 0;
        l =0, r=0;
        while (r<n)
        {
            temp_sum+=vec[r];
            t_sum = max(temp_sum, t_sum);
            if(str[r]=='0')
            {
                
                temp_sum =0;
            }
            r++;
        }
        long long rem = k-t_sum;
        //cout<<t_sum<<endl;
        cout<<"YES"<<endl;
        bool check = false;
        for(int i=0; i<n; i++)
        {
            if((str[i]== '0') && (!check))
            {
                cout<<rem<<" ";
                check = true;
                continue;
            }
            cout<<vec[i]<<" ";
        }
        cout<<endl;

        


    }
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}