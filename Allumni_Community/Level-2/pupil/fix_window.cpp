#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l = 0, r=0, cnt = 0;

    while(r<n)
    {
        if(l<n && a[l]<b[r])
            cnt++,l++;
        else
        {
            cout<<cnt<<" ";
            r++;
        }
    }

    return 0;
}

