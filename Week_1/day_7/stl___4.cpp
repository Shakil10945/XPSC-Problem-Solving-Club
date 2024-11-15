#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;

    map<string, string> initial_handle; // maps initial handle to final handle
    map<string, string> current_handle; // maps current handle to initial handle

    for (int i = 0; i < q; i++) {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        // Find the initial handle of the user with `old_handle`
        if (current_handle.count(old_handle)) {
            string init_handle = current_handle[old_handle]; // Get the initial handle
            current_handle.erase(old_handle); // Remove the old handle from current handles
            current_handle[new_handle] = init_handle; // Update to new handle
            initial_handle[init_handle] = new_handle; // Update the final handle in initial_handle map
        } else {
            // This is a new user handle change
            current_handle[new_handle] = old_handle;
            initial_handle[old_handle] = new_handle;
        }
    }

    // Output the results
    cout << initial_handle.size() << endl;
    for (const auto& entry : initial_handle) {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}
