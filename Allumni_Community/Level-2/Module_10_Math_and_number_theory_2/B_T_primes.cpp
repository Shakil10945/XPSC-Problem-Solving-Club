#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto isPerfectSquare = [&](long long n)
    {
        long long x = sqrtl(n);
        return (x * x == n);
    };
    auto isPrime = [&](long long nn)
    {
        if (nn == 1)
            return false;
        for (int i = 2; i * i <= nn; i++)
        {
            if (nn % i == 0)
                return false;
        }
        return true;
    };
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (isPerfectSquare(n) && isPrime(sqrtl(n)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
