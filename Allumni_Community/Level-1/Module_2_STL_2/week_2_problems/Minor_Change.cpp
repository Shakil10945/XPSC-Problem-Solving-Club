#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b; cin>>a>>b;
    // int x =0;
    // for(int i=0; i<a.size(); i++)
    // {
    //     if(a[i] != b[i])    x++;
    // }
    // cout<<x<<endl;

    cout<< inner_product(a.begin(),a.end(),b.begin(),0, plus<>(), not_equal_to<>())<<endl;

    return 0;
}

