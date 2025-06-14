#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>vec;
    int cases = 1;
    while(true)
    {
        int n, q;
        cin>>n>>q;
        vec.resize(n);
        if(!n && !q)
            break;
        for(int i=0;i<n; i++)
            cin>>vec[i];
        cout<<"CASE# "<<cases<<":"<<endl;
        cases++;
        sort(vec.begin(),vec.end());
        while (q--)
        {
            int key;    cin>>key;
            int l=0, r=n-1, mid, ans =-1;
            bool found = false;

            while(l<=r)
            {
                mid = (l+r)/2;
                if(key == vec[mid])
                {
                    ans = mid+1;
                    r= mid-1;
                    found = true;
                }
                else if(key<vec[mid])
                {
                    r = mid-1;
                }
                else
                    l=mid+1;
            }
            if(found)
                cout<<key<<" found at "<<ans<<endl;
            else
                cout<<key<<" not found"<<endl;
        }

        
    }

    return 0;
}
 