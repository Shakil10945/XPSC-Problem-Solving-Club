#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Ball 
{
    ll x, y, dx, dy;
};

bool willReachCorner(Ball ball, ll s) 
{
    ll x = ball.x, y = ball.y,  dx = ball.dx,  dy = ball.dy;
    ll t_x = (dx == 1) ? (s - x) : x; 
    ll t_y = (dy == 1) ? (s - y) : y;
    if (t_x == t_y)         return true;
    ll diff = abs(t_x - t_y);
    if (diff % 2 != 0)      return false;
    return (s % 2 == 0 && diff % (2 * s) == 0);
}

void solve() 
{
    ll n, s;    cin >> n >> s;
    
    int potted = 0;
    for (int i = 0; i < n; i++)
    {
        Ball ball;      cin >> ball.dx >> ball.dy >> ball.x >> ball.y;
        if (willReachCorner(ball, s))   potted++;
    }
    cout << potted << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}