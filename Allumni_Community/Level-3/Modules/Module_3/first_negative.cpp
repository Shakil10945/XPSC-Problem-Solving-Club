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
vector<int>FirstNegativeInteger(vector<int> & a, int k)
{
    int n = a.size(), l = 0, r= 0;
    vector<int> ans;
    queue<int> q;
    while(r<n)
    {
        if(a[r]<0)
            q.push(a[r]);

        if(r-l+1 == k)
        {
            if(!q.empty())
            {
                ans.push_back(q.front());
                if(a[l] == q.front());
                    q.pop();

            }
            else
                ans.push_back(0);
            l++, r++;
        }
        else
            r++;
    }
    return ans;
}
void solve()
{
    input();
    int k;
    cin>>k;
    vector<int> x = FirstNegativeInteger(vec, k);
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