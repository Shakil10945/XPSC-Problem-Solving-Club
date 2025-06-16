// #include <bits/stdc++.h>
// using namespace std;

// int ans(int t, int a, int b, int x, int y)
// {
//     int total = 0;

//     // Reduce 'a' as much as possible towards '0'
//     int move_a = max((t - a + x) / x, 0);
//     total += move_a;
//     t -= move_a * x;

//     // Reduce 'b' as much as possible towards '0' with the remaining moves
//     int move_b = max((t - b + y) / y, 0);
//     total += move_b;
//     t -= move_b * y;

//     return total;
// }

// void solve()
// {
//     int t, a, b, x, y;
//     cin >> t >> a >> b >> x >> y;

//     // Try both orders: reduce 'a' first or 'b' first
//     int option1 = ans(t, a, b, x, y);
//     int option2 = ans(t, b, a, y, x);

//     cout << max(option1, option2) << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int ans(int k, int a, int b, int x, int y)
{
    int total = 0;
    int move = max((k-a+x)/x, 0);

    total+= move;
    k-=move*x;

    int movee = max((k-b+y)/y,0);

    total+=movee;
    k-=move*y;

    return total;
}

void solve()
{
    int k,a,b,x,y;    cin>>k>>a>>b>>x>>y;

    int xx = ans(k, a,b , x, y);
    int yy = ans(k, b, a, y,x);

    cout<<max(xx,yy)<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}



// // #include <iostream>

// // using namespace std;

// // void solve() {
// //     int t, a, b, x, y;
// //     cin >> t >> a >> b >> x >> y;
// //     auto solve = [&](int t, int a, int b, int x, int y) {
// //         int cur = 0;
// //         cur += max((t - a + x) / x, 0);
// //         t -= max((t - a + x) / x, 0) * x;
// //         cur += max((t - b + y) / y, 0);
// //         return cur;
// //     };
// //     cout << max(solve(t, a, b, x, y), solve(t, b, a, y, x)) << endl;
// // }

// // signed main() {
// //     int q = 1;
// //     cin >> q;
// //     while (q --> 0)
// //         solve();
// //     return 0;
// // }

