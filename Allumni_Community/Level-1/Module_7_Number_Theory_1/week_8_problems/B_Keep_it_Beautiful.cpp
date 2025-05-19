#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        int nw_cnt = cnt + (!vec.empty() &&  vec.back()>x);
        
        if(nw_cnt == 0 || (nw_cnt == 1 && x<=vec[0]))
        {
            vec.push_back(x);
            cnt = nw_cnt;
            cout<<1;
            //cout<<" cnt-> "<<cnt<<" new_cnt "<<nw_cnt<<" x "<<x<<endl;
        }
        else
        {

            //cout<<" cnt-> "<<cnt<<" new_cnt "<<nw_cnt<<" x "<<x<<endl;
            cout<<0;
        }
    }
    cout<<endl;
    
}

void solve()
{
    input();
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