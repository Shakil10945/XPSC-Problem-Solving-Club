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
        int n, m, k;
        cin >> n >> m >> k;
        string str;
        cin >> str;

        int r = 0;
        int sum = 0;

        while (r < n)
        { 
            if (str[r] == '0') // Start of a weak segment
            {
                int temp_zero = 0;
                int l = r;

                // Count consecutive zeros
                while (r < n && str[r] == '0')
                {
                    temp_zero++;
                    r++;
                }

                if (k <= m) // When Timar covers <= m spots
                {
                    while (temp_zero > m - 1)
                    {
                        temp_zero -= (m - 1 + k); // Fix the weak segment
                        sum++; // Count the operation
                    }
                }
                else // When Timar covers > m spots
                {
                    while (temp_zero >= m) // Ensure weak segment is handled
                    {
                        temp_zero -= (m - 1 + k);
                        sum++;
                        l += m + k; // Advance pointer to cover fixed segment
                    }
                    // No need for `if (l > r)` adjustment
                }
            }
            else
            {
                r++; // Move to the next character
            }
        }
        cout << sum << endl; // Output result for this test case
    }
    return 0;
}
