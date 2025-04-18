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

        int a, b; 



        cin>>a>>b;


        string str; 

 

        cin>>str;

        map<char, int> my_map;
        for(auto x: str)
            my_map[x]++;

        int odd = 0;
        for(auto x: my_map)
        {
            if(x.second%2!=0)
                odd++;

        }
        cout<<(odd-1 > b? "NO" : "YES")<<endl;

    }

    return 0;
}

