#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string target = "codeforces", input;
        cin >> input;
        int diff = inner_product(target.begin(), target.end(), input.begin(), 0,
            plus<>(), [](char a, char b) { return a != b; }) + abs((int)target.size() - (int)input.size());
        cout << diff << endl;
    }
    return 0;
}