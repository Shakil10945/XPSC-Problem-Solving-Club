#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n , m;
        cin>>n>>m;
        if(n==1 || m==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<((n<3 && m<3)? "NO":"YES")<<endl;
    }

    return 0;
}

