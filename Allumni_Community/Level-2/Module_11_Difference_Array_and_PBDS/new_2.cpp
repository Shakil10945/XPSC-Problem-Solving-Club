// #include <bits/stdc++.h>
// using namespace std;

// long long gcd(long long a, long long b) 
// {
//     return abs(gcd(a, b));
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

    

//     return 0;
// }



// // Function to calculate GCD (can use std::gcd in C++17 or implement manually)


// int main() {
//     // Optimize C++ standard streams for faster input/output.
//     // This is often crucial in competitive programming for large inputs.
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);

//     int N;
//     std::cin >> N;

//     // Use a vector of pairs to store the vec.
//     // Using long long for coordinates to handle values up to 10^9.
//     std::vector<std::pair<long long, long long>> vec(N);

//     for (int i = 0; i < N; ++i) {
//         std::cin >> vec[i].first >> vec[i].second;
//     }

//     long long total_points_on_boundary = 0;

//     // Iterate through each segment of the polygon
//     for (int i = 0; i < N; ++i) {
//         // Current vertex (P1)
//         long long p1_x = vec[i].first;
//         long long p1_y = vec[i].second;

//         // Next vertex (P2). Use modulo N to wrap around for the last segment
//         // (connecting the last vertex to the first vertex).
//         long long p2_x = vec[(i + 1) % N].first;
//         long long p2_y = vec[(i + 1) % N].second;

//         // Calculate the absolute differences in coordinates
//         long long dx = std::abs(p2_x - p1_x);
//         long long dy = std::abs(p2_y - p1_y);

//         // Add the GCD of the differences to the total.
//         // This correctly counts all integer points on the segment,
//         // effectively counting each vertex once across the entire polygon.
//         total_points_on_boundary += gcd(dx, dy);
//     }

//     // Print the final result
//     std::cout << total_points_on_boundary << std::endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<long long, long long>> vec(n);


    for (auto& [x, y] : vec)
        cin >> x >> y;

    long long bund = 0;

    for (int i = 0; i < n; ++i) 
    {
        auto [x1, y1] = vec[i];

        auto [x2, y2] = vec[(i + 1) % n];


        bund += gcd(abs(x2 - x1), abs(y2 - y1));
    }

    cout << bund <<endl;
    return 0;
}