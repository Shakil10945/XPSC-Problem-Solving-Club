#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        // if(a>b) swap(a,b);
        // if(c>d)     swap(c,d);


        int x = 0;
        
        if((a>c && b>=d)|| (a>=c && b>d) ) x++;
        if((a>d && b>=c)|| (a>=d && b>c))   x++;

        if((b>c && a>=d)|| (b>=c && a>d))       x++;
        if((b>d && a>=c)|| (b>=d && a>c) )  x++;

        cout<<x<<endl;
    }

    return 0;
}



// def f(a, b):
//     if (a > b): return 1
//     if (a == b): return 0
//     if (a < b): return -1
// for _ in range(int(input())):
//     a, b, c, d = map(int, input().split())
//     ans = 0
//     if f(a, c) + f(b, d) > 0:
//         ans += 1
//     if f(a, d) + f(b, c) > 0:
//         ans += 1
//     if f(b, c) + f(a, d) > 0:
//         ans += 1
//     if f(b, d) + f(a, c) > 0:
//         ans += 1
//     print(ans)
