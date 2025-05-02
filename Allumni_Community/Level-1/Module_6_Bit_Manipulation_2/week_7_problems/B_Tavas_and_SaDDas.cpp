#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    int len = 0;
    int ans = 0;

    while (n)
    {
        if(n%10 == 7)
            ans+= (1<<len);
        n/=10;
        len++;
    }

    for(int i=0; i<len; i++)
        ans+= (1<<i);
    cout<<ans<<endl;
    

    return 0;
}

