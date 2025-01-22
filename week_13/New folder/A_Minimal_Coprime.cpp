#include <bits/stdc++.h>
using namespace std;

int a, b;

void input()
{
    cin>>a>>b;
}
bool isPrime(int x)
{
    for(int i=2; i*i <=x; i++)
    {
        if(x%i == 0)    
            return false;
    }
    return true;
}

void solve()
{
    input();

    if(a == 1 && b == 1)
        cout<<1<<endl;

    else
        cout<<abs(b-a)<<endl;
}

int main()
{
    ios::sync_with_stdio(false);    cin.tie(nullptr);
    int t;  cin>>t;
    while(t--)  solve();

    return 0;
}
