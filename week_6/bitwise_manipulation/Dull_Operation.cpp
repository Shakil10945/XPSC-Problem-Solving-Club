#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N; // The given odd integer N
        cin >> N;
        
        // Choose x = N and y = N - 1
        int x = N;
        int y = N - 1;
        
        // Output x and y
        cout << x << " " << y << endl;
    }
    
    return 0;
}
