#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int m,x;
        cin>>m>>x;

        int win = 0;
        int loss = 0;

        for(int i=1; i<=m-x; i++)
        {
            loss += pow(2, i);                        
        }
        for(int i= m-x+1; i<=m; i++)
        {
            win += pow(2,i);
        }

        cout<< win-loss<<endl;
    }
    

    return 0;
}