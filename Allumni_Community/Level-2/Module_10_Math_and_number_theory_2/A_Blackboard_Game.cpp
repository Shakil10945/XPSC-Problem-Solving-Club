// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         if(n<3)
//         {
//             cout<<"Alice"<<endl;
//             continue;
//         }
//         cout<<(n%2==0? "Bob": "Alice")<<endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        // Compute counts for each remainder 0,1,2,3
        int q = n / 4;
        int r = n % 4;
        vector<int> count(4, q); // Initialize all to q
        for(int i = 0; i < r; i++) {
            count[i]++; // First r get q+1
        }
        int s0 = count[0], s1 = count[1], s2 = count[2], s3 = count[3];
        // Compute total moves
        int moves = min(s0, s3) + min(s1, s2);
        // If moves is odd, Alice wins, else Bob
        if(moves % 2 == 1) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
    return 0;
}