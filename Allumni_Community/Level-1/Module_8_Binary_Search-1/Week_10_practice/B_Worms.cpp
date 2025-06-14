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
    //sort(vec.begin(),vec.end());

    vector<int>prefix_sum(n);
    prefix_sum[0]=vec[0];
    for(int i=1; i<n; i++)
        prefix_sum[i] = (prefix_sum[i-1]+vec[i]);
    
    int q;  cin>>q;
    
    cout<<endl;
    while (q--)
    {
        int key;    cin>>key;
        int l=0, r=n-1, mid;
        int ans =0;
        while(l<=r)
        {
            mid = (l+r)/2;

            if(key<=prefix_sum[mid])
            {
                ans = mid;
                r = mid-1;
            }
            else
                l = mid+1;
        }
        cout<<ans+1<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    solve();

    return 0;
}