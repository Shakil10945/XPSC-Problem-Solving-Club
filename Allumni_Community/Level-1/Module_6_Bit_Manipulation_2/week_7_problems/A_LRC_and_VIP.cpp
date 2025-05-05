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
    
    vector<int>vecc = vec;
    sort(vecc.begin(),vecc.end());
    if(vecc[0] == vecc[n-1])
    {
        cout<<"NO"<<endl;
        return;

    }
    cout<<"YES"<<endl;

    int maxxx = *max_element(vec.begin(),vec.end());
    bool check = false;
    for(int i=0; i<n; i++)
    {
        if((vec[i]==maxxx) && (check==false))
        {
            cout<<1<<" ";
            check = true;
            continue;
        }
        cout<<2<<" ";
    }
    cout<<endl;
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