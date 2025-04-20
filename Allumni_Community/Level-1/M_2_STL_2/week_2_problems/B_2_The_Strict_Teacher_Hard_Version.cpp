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
        int n, m,q;
        cin>>n>>m>>q;
        vector<int> vec(m);
        for(int i=0; i<m; i++)
            cin>>vec[i];
        
        sort(vec.begin(), vec.end());

        while (q--)
        {
            int d;
            cin>>d;

            if(d<vec[0])
                cout<<vec[0]-1<<endl;
            else if(d> vec[m-1])
                cout<<n-vec[m-1]<<endl;
            else
            {
                auto it = lower_bound(vec.begin(),vec.end(), d);
                int idx = it - vec.begin();

                cout<< (vec[idx] - vec[idx-1])/2 <<endl;
            }
        }
        
    }

    return 0;
}
 