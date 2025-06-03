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
    
    long long total = accumulate(vec.begin(),vec.end(), 0LL);
    long long sum = total;

    if(total%3 == 0)
    {
        cout<<"Yes"<<endl;
        return;
    }

    for(int i=n-1; i>=0; i--)
    {
        if(total<3)
            break;

        if(vec[i]%3==0)
        {
            cout<<"Yes"<<endl;
            return;
        }
        total -= vec[i];
        if((i!=0) &&((total%3)==0))
        {
            cout<<"Yes"<<endl;
            return;
        }
        if( (((sum-total )%3)==0))
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
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