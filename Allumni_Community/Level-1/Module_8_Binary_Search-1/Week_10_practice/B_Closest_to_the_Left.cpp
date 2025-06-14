#include <bits/stdc++.h>
using namespace std;

int n, q;
vector<int> vec;
//vector<int> quary;

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
        int key;    cin>>key;
        int l=0, r=n-1, mid;
        int index = -1;
        while(l<=r)
        {
            mid = (l+r)/2;

            if(vec[mid]<= key)
            {
                index = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        cout<<index+1<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();

    return 0;
}