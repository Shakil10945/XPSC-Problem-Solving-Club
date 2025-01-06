#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin>>n;
    vec.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();

    int sum = 0;

    for(int i=0; i<(1<<n); i++)
    {
        for(int k=0; k<n; k++)
        {
            //cout<<(i>>k)&1<<endl;
            if((i>>k)&1)
                sum+=vec[k];
            else
                sum-=vec[k];
            //cout<<vec[k]<< " ";
        }
        //cout<<sum<<endl;
        if(sum==0 || sum%360==0)
        {
            cout<<"YES"<<endl;
            return;
        }
        sum=0;
    }
    //cout<<__lg(n)<<endl;
    cout<<"NO"<<endl;

    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    // int t;  cin>>t;
    // while(t--)  
    solve();

    return 0;
}
