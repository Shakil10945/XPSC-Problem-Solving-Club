#include <bits/stdc++.h>
using namespace std;

int n;
vector<double>a;
vector<double>b;
vector<double>e;

void input() 
{
    cin >> n;
    a.resize(n+2);
    b.resize(n+2);
    e.resize(n+2);


    for (int i = 1; i <= n; i++)
        cin >> a[i];


    for (int i = 1; i <= n; i++)
        cin >> b[i];
}

void solve() 
{
    input();

    double lo = 0, hi = 1e12;

    for (int it = 0; it < 80; it++) 
    {
        double mid = 0.5 * (lo + hi);

        e[n+1] = 0;

        double sum = 0;
        for (int x = n; x >= 1; x--) 
        {
            double gStp   = a[x] + e[x+1];

            double gRndm = b[x] + mid;

            e[x] = min(gStp, gRndm);
            sum += e[x];
        }
        double S_new = sum / (n+1.0);
        if (S_new > mid) lo = mid;
        else              hi = mid;
    }

    double S = 0.5 * (lo + hi);
    e[n+1] = 0;

    for (int x = n; x >= 1; x--) 
    {
        double gStp   = a[x] + e[x+1];
        double gRndm = b[x] + S;

        e[x] = min(gStp, gRndm);
    }

    cout<<fixed<<setprecision(6)<<e[1]<<endl;
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
