#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];    
}

void solve()
{
    input();

    //set<int>ans;
    long long sum =0;
    for(int i=0;i<(1<<n); i++)
    {
        for(int j=(int)log2(pow(2,n)-1); j>=0 ;j--)
        {
            //cout<<((i>>j)&1)<<" ";
            if((i>>j)&1)
            {
                sum += vec[j];
            }
            else
                sum -= vec[j];
        }
        //cout<<sum<<endl;
        if(sum == 0 || sum%360==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        
        sum = 0;
    }
    cout<<"NO"<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}