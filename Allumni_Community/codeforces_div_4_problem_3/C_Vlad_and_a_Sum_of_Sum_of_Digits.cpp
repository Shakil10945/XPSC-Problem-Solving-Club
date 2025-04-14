#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digits from 1 to n
long long sumOfDigits(long long n) {
    long long sum = 0;
    long long factor = 1;

    while (n > 0) {
        long long currentDigit = n % 10;
        long long remaining = n / 10;

        // Add contribution of the current digit
        sum += remaining * factor * 45; // Sum of digits 0-9 is 45
        sum += currentDigit * (currentDigit + 1) / 2 * factor;

        // Move to the next digit
        n /= 10;
        factor *= 10;
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << sumOfDigits(n) << endl;
    }

    return 0;
}