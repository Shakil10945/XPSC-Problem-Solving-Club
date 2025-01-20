#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> vec;

void input()
{
    cin >> n>>q;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    while(q--)
    {
        int key, l=0, r=n-1, ans = n, mid;
        cin>>key;
        while (l<=r)
        {
            mid = l+(r-1)/2;
            if(key<=vec[mid])
            {
                ans = mid;
                r = mid-1;
            }
            else
                l= mid+1;
        }
        cout<<ans+1<<endl;        
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