#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);

    cout << *s.find_by_order(1) << endl; // Should print 20
    cout << s.order_of_key(25) << endl;  // Should print 2
    return 0;
}