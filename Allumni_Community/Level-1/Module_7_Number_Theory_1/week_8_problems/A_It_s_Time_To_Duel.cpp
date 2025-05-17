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
    
    int count_zero = count(vec.begin(),vec.end(),0);
    bool conse_zero = false;
    for(int i=0; i<n-1; i++)
    {
        if(vec[i]== 0 && (vec[i]==vec[i+1]))
        {
            conse_zero = true;
            break;
        }
    }
    if(!count_zero || conse_zero)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
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