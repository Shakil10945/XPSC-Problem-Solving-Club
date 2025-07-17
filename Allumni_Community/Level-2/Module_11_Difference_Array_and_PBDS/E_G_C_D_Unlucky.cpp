#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// Ordered Set (Order Statistics Tree)
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

int main() {
    ordered_set<int> os;
    os.insert(10);
    os.insert(20);
    os.insert(30);
    os.insert(40);

    cout << *os.find_by_order(2) << endl; // prints 30
    cout << os.order_of_key(35) << endl;  // prints 3

    return 0;
}