#include <iostream>
#include <vector>
#include <cmath>

const int MAXN = 10000000;
long long count2[MAXN + 1];

int main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    for (long long a1 = 0; a1 * a1 <= MAXN; ++a1) {
        for (long long a2 = 0; a1 * a1 + a2 * a2 <= MAXN; ++a2) {
            count2[a1 * a1 + a2 * a2]++;
        }
    }

    int n;
    std::cin >> n;

    long long ans = 0;
    for (int k = 0; k <= n; ++k) 
        ans += count2[k] * count2[n - k];

    std::cout << ans << std::endl;

    return 0;
}