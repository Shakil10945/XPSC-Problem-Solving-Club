#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> pi_mod_k;

        if(k==1)
        {
            cout<<-1<<endl;
            continue;
        }

        for(int i=n; i>=1; i--)
            pi_mod_k.push_back(i);
        
        for(int i=0; i<n; i++)
        {
            cout<<pi_mod_k[i]<<" ";
        }
        cout<<endl;
        



    }

    return 0;
}
