#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;
vector<int> vecx;

void input()
{
    cin >> n;
    vec.resize(n);
    vecx.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    for (int i = 0; i < n; i++)
        cin >> vecx[i];
}

void solve()
{
    input();

    vector<int> c1(n+1, 0);
    vector<int> c2(n+1, 0);

    for (int i = 0; i < n; i++) 
    {
        int a = vec[i];
        int b = vecx[i];

        if (a == b)
            c2[a]++;
        
        else 
        {
            c1[a]++;
            c1[b]++;
        }
    }


    vector<int> type(n+1, 0);

    for (int x = 0; x <= n; x++) 
    {
        if (c2[x] > 0)
            type[x] = 2;

        else if (c1[x] > 0)
            type[x] = 1;
        
        else 
            type[x] = 0;
    }

    int cnt0 = 0, cnt1 = 0;
    int answer = n;

    for (int m = 0; m <= n; m++) 
    {
        if (type[m] == 0)
            cnt0++;
        else if (type[m] == 1)
            cnt1++;
        
        if (cnt0 >= 1 || cnt1 >= 2)
        {
            answer = m;
            break;
        }
    }

    cout << answer << endl;
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
