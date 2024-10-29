#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>> x;

    string a = "000";
    string b = "00";
    string c = "0";
    
    if(x<10)            cout<< a + to_string(x)<<endl;
    else if(x<100)      cout<< b + to_string(x)<<endl;
    else if(x<1000)     cout<< c + to_string(x)<<endl;
    else                cout<< x<<endl;

    return 0;
}