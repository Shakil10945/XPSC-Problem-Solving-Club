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
        long long n;
        cin>>n;

        deque<long long> ans;
        for(int k=0; k<= __lg(n);k++)
        {
            if((n>>k)& 1)
            {
                long long value = n- (1LL<<k);
                if(value>0)
                    ans.push_back(value);
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<endl;
        for(auto value: ans)
            cout<<value<<" ";
        cout<<endl;
    }

    return 0;
}

