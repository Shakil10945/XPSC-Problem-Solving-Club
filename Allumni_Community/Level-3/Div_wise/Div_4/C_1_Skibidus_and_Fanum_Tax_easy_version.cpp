// #include <bits/stdc++.h>
// using namespace std;

// int n, m, x;
// vector<int> vec;

// void input()
// {
//     cin >> n >> m;
//     vec.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
//     cin >> x;
// }

// void solve()
// {
//     input();

//     vec[0] = min(vec[0], x-vec[0]);

//     for(int i=1; i<n;i++)
//     {
//         int xx = min(vec[i], x-vec[i]);
//         if(xx> vec[i-1])
//             vec[i] = xx;
//     }
//     cout<<((is_sorted(vec.begin(),vec.end())) ? "YES": "NO")<<endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//         solve();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int n, m, x;
vector<int> vec;

void input()
{
    cin >> n >> m;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    cin >> x;
}

void solve()
{
    input();

    vec[0] = min(vec[0], x - vec[0]);

    for (int i = 1; i < n; i++)
    {
        int lx = min(vec[i], x- vec[i]);
        int hx = min(vec[i], x-vec[i]);
        if(lx>vec[i-1])
            vec[i] = lx;
        else if(hx>vec[i-1])
            vec[i] = hx;
    }

    cout<<((is_sorted(vec.begin(),vec.end())) ? "YES": "NO")<<endl;
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