#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec;

void input()
{
    cin >> n;
    vec.resize(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
}

void solve()
{
    input();
    
    int q;  cin>>q;
    while(q--)
    {
        int key;    cin>>key;

        int l=0, r= n-1, mid;

        int left = -1, right = -1;
        bool left_found=false, right_found= false;

        while(l<=r)
        {
            mid = (l+r)/2;

            if(vec[mid]<key)
            {
                left = mid;
                left_found = true;
                l = mid+1;
            }
            else if(key==vec[mid])
                r=mid-1;
            else
                r = mid-1;
        }
        l=0, r= n-1, mid;
        while(l<=r)
        {
            mid = (l+r)/2;

            if(key<vec[mid])
            {
                right = mid;
                right_found = true;
                r = mid-1;
            }
            else if(key==vec[mid])
               l=mid+1; 
            else
                l = mid+1;
        }

        if(left_found)  cout<<vec[left]<<" ";
        else            cout<<"X ";
        if(right_found) cout<<vec[right];
        else            cout<<"X";
        cout<<endl;

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    solve();

    return 0;
}