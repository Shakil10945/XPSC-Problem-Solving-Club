#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b, c;
    cin>>a>>b>>c;
    bool check = true;
    for(int i=1; i<1000; i++)
    {
        if(i*c >=a && i*c<=b)
        {
            cout<<i*c<<endl;
            check = false;
            break;
        }
    }
    if(check)  cout<<-1<<endl;

    return 0;
}

