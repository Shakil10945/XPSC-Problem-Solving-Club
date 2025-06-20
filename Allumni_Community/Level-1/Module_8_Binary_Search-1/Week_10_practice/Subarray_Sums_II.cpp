// #include <bits/stdc++.h>
// using namespace std;

// int n,k;
// vector<int> vec;

// void input()
// {
//     cin >> n >>k;
//     vec.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> vec[i];
    
// }

// void solve()
// {
//     input();

//     vector<int>prefix_sum(n);
//     prefix_sum[0] = vec[0];
//     for(int i=1; i<n; i++)
//         prefix_sum[i] = (prefix_sum[i-1]+vec[i]);

//     map<int,int>mp;
//     for(auto x: prefix_sum)
//         mp[x]++;
    
//     long long ans = 0;
//     ans+=mp[k];
//     mp.erase(k);

//     for(int i=0;i <n; i++)
//     {
    
//         if(mp[(prefix_sum[i] - k)])
//         {
//             ans++;
// //mp[(prefix_sum[i] + k)]--;
//         }
//         //mp.erase(prefix_sum[i]-k);
//     }
//     cout<<ans<<endl;
    
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();

//     return 0;
// }


// #include <iostream>
// #include <map>
// #include <vector>

// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N, X;
// 	cin >> N >> X;
// 	vector<int> T(N);
// 	for (int i = 0; i < N; i++) { cin >> T[i]; }

// 	long long prefix_sum = 0;
// 	long long ans = 0;
// 	map<long long, int> sums;
// 	sums[0] = 1;
// 	for (int x : T) {
// 		prefix_sum += x;
// 		/*
// 		 * If there is a subarray with a prefix sum of prefix_sum - X,
// 		 * we can exclude it from our current subarray to get the desired sum.
// 		 * Thus, we can add the number of those subarrays to our answer.
// 		 */
// 		ans += sums[prefix_sum - X];
// 		// Increment the amount of prefix sums with a sum of prefix_sum
// 		sums[prefix_sum]++;
// 	}
// 	cout << ans << endl;
// }


#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> vec;

void input()
{
    cin >> n >>k;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();

    long long prefix_sum =0;
    long long ans = 0;
    map<long long ,int> mp;
    mp[0]=1;
    for(int i=0; i<n; i++)
    {
        prefix_sum+=vec[i];
        
        ans +=mp[prefix_sum-k];

        mp[prefix_sum]++;
    }
    cout<<ans<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();

    return 0;
}