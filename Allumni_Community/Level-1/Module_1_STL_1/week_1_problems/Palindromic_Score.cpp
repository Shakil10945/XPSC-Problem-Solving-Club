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
        int a,b,c;

        cin>>a>>b>>c;

        if(a==0 || b== 0 || c==0)
        {
            cout<< a+b+c - max({a,b,c})<<endl;
            continue;
        }

        if((a%2 ==1 && b%2 == 1) || (c%2 ==1 && b%2 == 1) || (a%2 ==1 && c%2 == 1))
        {
            if(a%2 ==1 && b%2 == 1 && c%2 ==1)
            {
                cout<< a+b+c - max({a,b,c})<<endl;
                continue;
            }
            else
            {
                if(max({a,b,c})%2 == 0)
                {
                    cout<< a+b+c - max({a,b,c}) -1<<endl;
                    continue;
                }
                else
                {
                    cout<< a+b+c - max({a,b,c})<<endl;
                    continue;
                }
            }
        }
        cout<< a+b+c - max({a,b,c})<<endl;
    }

    return 0;
}

