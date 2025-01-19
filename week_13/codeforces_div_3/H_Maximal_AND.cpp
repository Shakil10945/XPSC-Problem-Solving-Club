#include <bits/stdc++.h>
using namespace std;

int a, b, d, e;

void input()
{
    cin >>a >> b>> d>>e;
}

void solve()
{
    input();
    int score = 0;
    if(a+b == d-b)  score++;
    if(a+b == e-d) score++;
    if(e-d == d-b)  score++;

    if(score)   cout<<score<<endl;
    else        cout<<1<<endl;

    

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