// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;  cin>>n;
//         int bit = (int)log2(n);

//         if(n== 14)
//         {
//             cout<<5<<endl<<"0 -1 0 0 1"<<endl;
//             continue;
//         }

//         bool check = false;
//         //cout<<(1<<(bit+1))<<endl<<endl;
//         for(int i=0; i<=(1<<(bit+2)); i++)
//         {
//             string binary = bitset<32>(i).to_string();
//             binary.erase(0, binary.find_first_not_of('0'));
//             if(binary.find("11") != -1)
//             {
//                 continue;
//             }
//             //cout<<binary<<endl;
//             int temp_n = n;
//             string str ="";
//             int x =binary.size()-1;
//             for(int j=x; j>=0; j--)
//             {
//                 if(temp_n == 0)
//                 {
//                     check = true;
//                 }
//                 if(binary[j] == '0')    str+="0";
//                 if(binary[j] == '1')
//                 {
//                     //cout<<"J->"<< j<<endl;
//                     //cout<<temp_n<<" ";
//                     if(temp_n>0)
//                     {
//                         temp_n -= (1<<j);
//                         str+="1";

//                     }
//                     else if(temp_n<0)
//                     {
//                         if(temp_n <=(-(1<<j)))
//                         {
                            
//                             temp_n +=(1<<j);
//                             //cout<<"HI"<<" "<<temp_n<<" <- temp_n j->"<<j<<" 1<<j-> " <<(1<<j)<<" ";
//                             str+="-1";
//                         }
//                         else
//                         {
//                             str+="0";
//                         }
//                     }
//                 }
//                 if(temp_n == 0)
//                 {
//                     check = true;
//                     //break;
//                 }
//             }
//             //cout<<binary<<endl<<endl;
//             if(check)
//             {
//                 reverse(str.begin(),str.end());
//                 for(int d = 0; d<str.size();)
//                 {
//                     if(str[i]=='-1')
//                     {
//                         cout<<str[i]<<str[i+1]<<" ";
//                         d+=2;
//                         continue;
//                     }
//                     cout<<str[i]<<" ";
//                     d++;
//                 }
//                 cout<<endl;
//                 break;
//             }
//         }
//         //cout<<"Hi"<<endl<<endl;
//         //cout<<endl;
//     }

//     return 0;
// }

#include "bits/stdc++.h"

#define all(a) a.begin(), a.end()
#define pb push_back
typedef long long ll;
using namespace std;
mt19937 rnd(std::chrono::high_resolution_clock::now().time_since_epoch().count());
 
/// Actual code starts here
const int N = 100005;
 
void solve() {
    ll x;
    cin >> x;
    vector<int> res(31, 0);
    for (int i = 0; i < 30; i++) 
    {
        if (1ll & (x >> i)) 
        {
            if (res[i]) 
            {
                res[i + 1] = 1;
                res[i] = 0;
            } 
            else if (i > 0) 
            {
                if (res[i - 1] == 1) 
                {
                    res[i + 1] = 1;
                    res[i - 1] = -1;
                } 
                else 
                {
                    res[i] = 1;
                }
            } 
            else if (i == 0) 
            {
                res[i] = 1;
            }
        }
    }
    cout << 31 << '\n';
    for (int i = 0; i <= 30; i++) {
        cout << res[i] << ' ';
    }
    cout << '\n';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--)
        solve();
}