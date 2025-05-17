#include <bits/stdc++.h>
using namespace std;

void flush() {
    cout.flush();
}

void send_command(const string& cmd) {
    cout << cmd << endl;
    flush();
}

int read_response() {
    int res;
    cin >> res;
    return res;
}

void solve_case(int n) {
    // Step 1: apply digit operation a few times
    for (int i = 0; i < 3; ++i) {
        send_command("digit");
        int res = read_response();
        if (res == -1) exit(0); // safety check
    }

    // Try all small x values from 1 to 100
    for (int guess = 1; guess <= 100; ++guess) {
        // Reset x to guess
        send_command("add " + to_string(guess));
        if (read_response() == -1) exit(0);
        
        int curr = guess;
        for (int i = 0; i < 3; ++i) {
            if (curr == n) {
                send_command("!");
                int res = read_response();
                if (res == -1) exit(0);
                return;
            }

            // Try multiplying
            if (n % curr == 0) {
                int mul_val = n / curr;
                send_command("mul " + to_string(mul_val));
                if (read_response() == -1) exit(0);
                send_command("!");
                int res = read_response();
                if (res == -1) exit(0);
                return;
            }

            // Otherwise, just try digit again
            send_command("digit");
            if (read_response() == -1) exit(0);
        }
    }

    // As fallback: just guess with brute digit + add
    for (int i = 0; i < 7; ++i) {
        send_command("digit");
        if (read_response() == -1) exit(0);
    }
    send_command("!");
    int res = read_response();
    if (res == -1) exit(0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        solve_case(n);
    }

    return 0;
}