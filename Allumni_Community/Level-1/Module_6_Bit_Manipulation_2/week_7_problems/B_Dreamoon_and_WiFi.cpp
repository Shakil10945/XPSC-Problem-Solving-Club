#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    string a,b; cin>>a>>b;

    map<char,int> ma;
    map<char,int> mb;

    for(auto x: a)
        ma[x]++;
    for(auto x: b)
        mb[x]++;

    if(ma==mb)
    {
        //cout<<"HI"<<endl;
        cout<<fixed << setprecision(12) << 1.0<< endl;
        return 0;
    }

    int lena= ma['+'] - ma['-'];
    int lenb = mb['+'] - mb['-'];

    int diff = lena - lenb;
    int dd = 0;
    int x =0;
    //cout<<mb['?']<<endl;
    //cout<<(1<<mb['?'])<<endl;
    for(int i=0;i<(1<<mb['?']); i++)
    {
        int cont = 0;
        for(int  j=mb['?']-1; j>=0; j--)
        {
            //cout<<((i>>j)&1)<<" ";
            if((i>>j)&1)    cont++;
            else    cont--;
        }
        //cout<<endl;
        if(diff == cont)
        {
            dd++;
        }
        x++;
    }
    //cout<<"x -> "<<x<<" dd->>"<<dd<<endl;
    cout<<fixed << setprecision(12) << (double)dd / x << endl;


    return 0;
}

