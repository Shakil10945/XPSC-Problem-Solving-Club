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
    
    sort(vec.begin(), vec.end());

    int q;
    cin>>q;
    while (q--)
    {
        int key;    cin>>key;
        int l=0, r=n-1, mid;
        int ans = 0;
        while (l<=r)
        {
            mid = (l+r)/2;
            if(key>=vec[mid])
            {
                ans = mid+1;
                l= mid+1;
            }
            else
            {
                r= mid-1;
            }
        }
        cout<<ans<<endl;
        
    }
    


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    //while (t--)
    solve();

    return 0;
}