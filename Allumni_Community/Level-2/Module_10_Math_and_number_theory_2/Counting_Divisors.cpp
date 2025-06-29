#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6+9;
vector<int>divisors[maxN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1; i<maxN; i++)
    {
        for(int j=i; j<maxN; j+=i)
            divisors[j].push_back(i);
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<divisors[n].size()<<endl;
    }
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// const int maxN = 1e6+9;
// vector<int>divisors(maxN);

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     for(int i=1; i<maxN; i++)
//     {
//         for(int j=i; j<maxN; j+=i)
//             divisors[j]++;
//     }

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         cout<<divisors[n]<<endl;
//     }


//     return 0;
// }




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
//         int x;
//         cin>>x;
//         int cnt = 0;
//         for(int i=1; i*i<=x; i++)
//         {
//             if(x%i==0)
//             {
//                 if(i!=(x/i))
//                     cnt+=2;
//                 else
//                     cnt++;
//             }
//         }
//         cout<<cnt<<endl;
//     }

//     return 0;
// }

