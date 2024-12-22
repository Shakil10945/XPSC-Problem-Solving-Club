// #include <bits/stdc++.h>
// using namespace std;

// int n;
// vector<int> vec;
// vector<long long> ps;
// string s;

// void input() 
// {
//     cin >> n;
//     vec.resize(n);
//     ps.resize(n + 1, 0);

//     for (int i = 1; i <= n; i++) 
//     {
//         cin >> vec[i - 1];
//         ps[i] = ps[i - 1] + vec[i - 1];
//     }
//     cin >> s;
// }

// void solve() 
// {
//     input();

//     int i = 0, j = n - 1;
//     long long total = 0;
//     while (i < j) 
//     {
//         while (i < n && s[i] != 'L')    i++;
//         while (j >= 0 && s[j] != 'R')   j--;

//         if (i <= j) 
//         {
//             total += ps[j + 1] - ps[i];
//             i++;
//             j--;
//         } 
//         else    break;
//     }
//     cout << total << endl;
// }

// int main() 
// {
//     ios::sync_with_stdio(false);    cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin>>n;
    vec.resize(n,0);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();

    for(int i=0; i<n; i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
