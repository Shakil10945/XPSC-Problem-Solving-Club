#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<string, int> freq;
        long long totalPairs = 0;

        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;

            // Try modifying first and second character separately
            for (int j = 0; j < 2; ++j) {
                for (char ch = 'a'; ch <= 'k'; ++ch) {
                    if (s[j] == ch) continue;

                    string modified = s;
                    modified[j] = ch;

                    totalPairs += freq[modified];
                }
            }

            freq[s]++;
        }

        cout << totalPairs << "\n";
    }

    return 0;
}