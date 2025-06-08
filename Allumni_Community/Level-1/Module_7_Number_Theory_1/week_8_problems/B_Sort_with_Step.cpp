#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<int> vec;

void input()
{
    cin >> n>>k;
    vec.resize(n+1);

    for (int i = 1; i <= n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int count = 0;
    for(int i=1; i<=n; i++)
    {
        if(i==vec[i])   continue;
        if(abs(vec[i]-i)%k !=0)
        {
            count++;
        }
        
    }
    if(!count)  cout<<0<<endl;
    else if(count==2)
        cout<<1<<endl;
    else
        cout<<-1<<endl;


    

    
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