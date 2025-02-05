#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> vec;

void input()
{
    cin >> n>>x;
    vec.resize(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}

void solve()
{
    input();

    int l=0, r= 0;
    int count = r-l+1;
    int s= 0;
    while(r<n-1)
    {
        count = max(count, r-l+1);
        
        if(s== 0 && (vec[r] > vec[r+1]))
        {
            if(vec[r]*x <= vec[r+1])
            {
                s++;
            }
            else
            {
                l=r;
                //continue; 
            }
        }
        else if(s !=0 && (vec[r]> vec[r+1]))
        {
            s=0;
            l=r;
            continue; 
        }
        r++;         
    }
    cout<<count<<endl;   

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