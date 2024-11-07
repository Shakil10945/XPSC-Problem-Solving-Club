#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, k; cin>>n>>k;
        multiset<char> myset;
        set<char> set;
        for(int i=0; i<n;i++)
        {
            int c;
            cin>>c;
            myset.insert(c);
            set.insert(c);
        }

        int odd =0;
        
        for(auto &element : set)
        {
            if(myset.count(element) %2 != 0)    odd++;
        }

        if(odd == 1 && k%2 == 0)        cout<<"YES"<<endl;
        else if(odd>k)
        {
            if(odd - k == 1)        cout<< "YES"<<endl;
        }
        else if(odd<k)
        {
            if((k- odd) %2 ==0 || (k-(odd+1))%2 == 0)       cout<<"YES"<<endl;


        }
        else
            cout<< "NO"<<endl;


        


        
    }
    
    

    return 0;
}