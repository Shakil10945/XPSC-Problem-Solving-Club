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
    
    int r= n-1;
    if(vec[r]>=n-1) r--;
    else
    {
        cout<<-1<<endl;
        return;
    }
    int count = 0;
    bool check = false;
    while (r>=0)
    {
        if(vec[r]<r)
        {
            check = true;
            break;
        }
        while(vec[r]>=vec[r+1])
        {
            vec[r] = vec[r]/2;
            count++;
        }
        if(vec[r]<r)
        {
            check =true;
            break;
        }

        r--;
    }
    if(check)   cout<<-1<<endl;
    else        cout<<count<<endl;
    
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