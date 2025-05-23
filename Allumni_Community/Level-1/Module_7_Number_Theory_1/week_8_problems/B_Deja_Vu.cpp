#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;

    while (t--)
    {
        int n, q;
        cin>>n>>q;

        vector<int>a(n);
        for(int &x: a)  cin>>x;

        vector<int>quaries;
        quaries.push_back(31);

        while(q--)
        {
            int x;
            cin>>x;
            if(x<quaries.back())
                quaries.push_back(x);
        }

        for(int &x: a)
        {
            for(int y: quaries)
            {
                if(x%(1<<y)==0)
                    x|=(1<<(y-1));
            }
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}