#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin>>n;
    vec.resize(n);

    for(int i=0; i<n; i++)  cin>>vec[i];
}

void solve()
{
    input();

    bool check = false;
    for(int mask=0; mask< (1<<n); mask++)
    {
        int sum = 0;
        for(int k=0; k<n; k++)
        {
            if((mask >> k) &1)    sum+= vec[k];
            else                sum -= vec[k];
        }
        if(sum%360 == 0)
        {
            check = true;
            break;
        }
    }
    if(check)   cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;    
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    solve();

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//    ios::sync_with_stdio(false);     cin.tie(nullptr);

//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0;i < n;i++) {
//       cin >> a[i];
//    }
//    bool ok = false;
//    for (int mask = 0;mask < (1 << n);mask++) {
//       int sum = 0;
//       for (int k = 0;k < n;k++) {
//          if ((mask >> k) & 1) {
//             sum += a[k];
//          }
//          else {
//             sum -= a[k];         
//         }
//       }

//       if (sum % 360 == 0) {
//          ok = true;
//          break;
//       }
//    }

//    if (ok) {
//       cout << "YES" << '\n';
//    }
//    else {
//       cout << "NO" << '\n';
//    }

//    return 0;
// }