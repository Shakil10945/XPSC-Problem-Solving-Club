#include <bits/stdc++.h>
using namespace std;

int n, s;
vector<int> vec;

void input()
{
    cin >> n >> s;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    int x = accumulate(vec.begin(), vec.end(), 0);

    if(x<=s)
    {
        cout<<(x== s? 0: -1)<<endl;
        return;
    }

    int l=0, r=n-1;
    int curr = n-s;
    int cnt=0;
    while (r>=l)
    {
        int temp_l = l;
        while (!vec[l]='1')
        {
            i
        }
        
        //cout<<"current "<<curr<<endl;

        //cout<<'h'<<endl;
        if(!curr)
        {
            cout<<cnt<<endl;
            return;
        }
        if(vec[l] >= vec[r])
        {
            curr-= vec[l];
            l++;
        }
        else 
        {
            curr-=vec[r];
            r--;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    
    
    
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