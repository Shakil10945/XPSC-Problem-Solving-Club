#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    multiset<int>st;

    for(int i=0;i<n; i++)
    {
        if(!st.empty() && vec[i]>= (*st.rbegin()))
        {
            st.insert(vec[i]);
            continue;
        }
        auto it = st.upper_bound(vec[i]);
        if(it!=st.end())
            st.erase(it);
        st.insert(vec[i]);
    }
    cout<<st.size()<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}



// // #include <bits/stdc++.h>
// // using namespace std;

// // int n;
// // vector<int> vec;

// // void input() {
// //     cin >> n;
// //     vec.resize(n);
// //     for (int i = 0; i < n; i++) cin >> vec[i];
// // }

// // void solve() {
// //     input();
    
// //     vector<int> st; // Will store the ends of potential LIS

// //     for (int i = 0; i < n; i++) {
// //         auto it = upper_bound(st.begin(), st.end(), vec[i]); // For strictly increasing
// //         if (it != st.end())
// //             *it = vec[i]; // Replace the element to keep the vector minimal
// //         else
// //             st.push_back(vec[i]); // Extend the sequence
// //     }

// //     cout << st.size() << endl; // The size is the length of the required sequence
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     solve();

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int n, k;
// 	cin >> n;
// 	multiset<int> ans;
// 	for (int i = 0; i < n; ++i) {
// 		cin >> k;
// 		auto it = ans.upper_bound(k);
// 		// Find the tower having the element that is just larger than k to add
// 		// k to. If it doesn't exist then we create a new tower.
// 		if (it == ans.end()) ans.insert(k);
// 		else {
// 			// If there exists a satisfying tower, add k to that tower and
// 			// update the top element of the tower
// 			ans.erase(it);
// 			ans.insert(k);
// 		}
// 	}
// 	cout << ans.size();
// 	return 0;
// }