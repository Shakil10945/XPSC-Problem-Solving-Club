#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> vec;

void input()
{
    cin >> n >>q;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    

    while (q--)
    {
        int key;    cin>>key;
        int l=0, r=n-1, mid;
        int index = n+1;
        //cout<<8<<endl;

        while(l<=r)
        {
            mid = (l+r)/2;

            if(vec[mid]>=key)
            {
                r=mid-1;
                index = mid+1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout<<index<<endl;
    }
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    solve();

    return 0;
}