#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() 
{
    ll n, m;
    cin >> n >> m;
    ll max_sum = n * (n + 1) / 2;
    if (m < n || m > max_sum) 
    {
        cout <<-1<<endl;        return;
    }
    if (m == n) 
    {
        cout <<1<<endl;

        for (int i = 2; i <= n; i++)
            cout <<1<<" "<< i <<endl;
        return;
    }
    ll d = m - n;
    ll k = -1;
    for (ll i = 1; i <= n-1; i++) 
    {
        if (i*(n - i)== d) 
        {
            k = i;      break;
        }
    }
    if (k == -1) 
    {
        ll root = m -(n- 1);
        if (root < 1 || root > n) 
        {
            cout <<-1<<endl;
            return;
        }
        cout << root <<endl;
        int prev = root;
        for (int i = 1; i <= n; i++) 
        {
            if (i != root) 
            {
                cout << prev << " " <<i<<endl;
                prev = i;
            }
        }
        return;
    }
    cout << n<<endl;
    for (ll i = n; i > n - k + 1; i--) 
        cout << i << " " << i - 1<<endl;
    cout << n - k + 1<<endl;

    for (ll i = 2; i <= n - k; i++) 
    {
        if (i != n - k + 1)
            cout << "1 " << i<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}