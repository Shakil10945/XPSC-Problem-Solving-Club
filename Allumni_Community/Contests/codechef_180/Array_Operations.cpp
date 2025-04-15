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
    if(n==1)
    {
        cout<<vec[0]<<endl;
        return;
    }
    if(n==3)
    {
        if(vec[1]>(max(vec[0], vec[2])))
        {
            cout<<vec[1]<<endl;
            return;
        }
        else 
        {
            cout<<*max_element(vec.begin(),vec.end())+1<<endl;
            return;
        }
    }
    
    int maxx = *max_element(vec.begin(),vec.end());

    for(int i=0;i<n; i++)
    {
        if(maxx == vec[i])
        {
            if((i+1 )%2 !=0)
            {
                cout<<maxx+(n/2)<<endl;
                return;
            }
        }
    }
    cout<<maxx + (n/2)-1<<endl;
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