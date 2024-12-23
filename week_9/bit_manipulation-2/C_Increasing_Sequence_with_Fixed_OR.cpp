#include <bits/stdc++.h>
using namespace std;

long long n;
void input()
{
    cin>>n;
}

void solve()
{
    input();

    vector<long long int> vec;

    for(int k=0; k<=__lg(n); k++)
    {
        if((n>>k)&1)
        {
            long long value = n - (1LL << k);
            if(value>0)
                vec.push_back(value);
        }
    }
    vec.push_back(n);
    sort(vec.begin(), vec.end());

    cout<<vec.size()<<endl;

    for(auto x: vec)
        cout<<x<<" ";
    cout<< endl;    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int t;
//    cin >> t;
//    while (t--) {
//       long long n;
//       cin >> n;
//       deque<long long> ans;
//       for (int k = 0;k <= __lg(n);k++) {
//          if ((n >> k) & 1) {
//             long long value = n - (1LL << k);
//             if (value > 0) {
//                ans.push_front(value);
//                cout<<value<<" ";
//             }
//          }
//       }

//       ans.push_back(n);
//     //cout << ans.size() << '\n';
//     //   for (auto value : ans) {
//     //      cout << value << " ";
//     //   }
//       cout << '\n';
//    }

//    return 0;
// }