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
        long long n, m, a,b;
        cin>>n>>m>>a>>b;
        if((m<n )|| (m>(n*b)) || (m<(n*a)))
        {
            cout<<"No"<<endl;
            continue;
        }
        if(a*n==m ||(b*n==m))
        {
            cout<<"Yes"<<endl;
            continue;
        }
        long long d =n;
        long long x = n*b;
        bool check =false;


        vector<long long>lcm;
        long long f = (a/__gcd(a,b))*b;
        long long c = 1;
        while (f<(n*b))
        {
            lcm.push_back(f);
            
            c++;
            f*=c;
        }
        for(auto xx: lcm)
            cout<<xx<<" ";
        cout<<endl;

        reverse(lcm.begin(),lcm.end());
        bool tc = false;

        for(int i=0; i<lcm.size(); i++)
        {
            if(((m-lcm[i])%a==0)&&((((n*b)-lcm[i])/b) == ((m-lcm[i])/a)))
            {
                cout<<"Yes"<<endl;
                tc = true;
                break;
            }

        }
        if(!tc) cout<<"No"<<endl;

    }

    return 0;
}

