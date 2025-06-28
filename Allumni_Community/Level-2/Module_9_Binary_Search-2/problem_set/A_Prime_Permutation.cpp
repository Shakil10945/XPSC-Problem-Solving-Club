#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 1001;

int main() {
    string s;
    getline(cin, s);
    int n = s.length();

    vector<int> freq(256, 0);
    for (char ch : s) {
        freq[ch]++;
    }

    // Find the character with maximum frequency
    int maxChar = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > freq[maxChar]) {
            maxChar = i;
        }
    }

    // Sieve to mark "special" positions (non f[i] = not prime or i=1 or i*2<=n)
    vector<bool> isGood(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (isGood[i]) {
            for (int j = i * i; j <= n; j += i) {
                isGood[j] = false;
            }
        }
    }

    isGood[1] = true;
    for (int i = 2; i + i <= n; i++) {
        isGood[i] = false;
    }

    // First, assign maxChar to all not-good positions
    string result = s;
    for (int i = 1; i <= n; i++) {
        if (!isGood[i]) {
            if (freq[maxChar] == 0) {
                cout << "NO" << endl;
                return 0;
            }
            result[i - 1] = char(maxChar);
            freq[maxChar]--;
        }
    }

    // Then fill the good positions with remaining characters
    int ch = 0;
    for (int i = 1; i <= n; i++) {
        if (isGood[i]) {
            while (freq[ch] == 0) ch++;
            result[i - 1] = char(ch);
            freq[ch]--;
        }
    }

    cout << "YES" << endl;
    cout << result << endl;

    return 0;
}