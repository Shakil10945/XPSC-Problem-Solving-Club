#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;  cin>>n;

    cout<<2<<endl;
    for (int i = 1; i <=n; i++)
        cout << i <<" ";
    cout<<endl;

    for (int i = n; i >= 1; i--)
        cout << i <<" ";
    cout<<endl;

    // vector<int>numbers(n);
    // for (int i = 0; i < n; ++i)         numbers[i] = i + 1;
    
    
    // vector<vector<int>> perm;

    
    // do{
    //     perm.push_back(numbers);
    // } while (next_permutation(numbers.begin(), numbers.end()) && perm.size() < 10);
    


    // cout << perm.size()<<endl;


    // for (const auto& perm : perm) 
    // {
    //     for (int i = 0; i < n; ++i) 
    //         cout<<perm[i]<<" ";
    //     cout<<endl;
    // }
    
    return 0;
}
