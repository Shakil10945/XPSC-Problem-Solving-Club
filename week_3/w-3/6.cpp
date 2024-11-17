#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>vec(n);
        multiset<int> my_set;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }

        int l=0, r=1, ans = 0;
        for(int i=n-1; i>= 0; i--)
        {
            my_set.insert(vec[i]);
            if(!(my_set.count(vec[i]) > 1))
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout<< n- ans<<endl;
        
    }
    

    
    

    return 0;
}