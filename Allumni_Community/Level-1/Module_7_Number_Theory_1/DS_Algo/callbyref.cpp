#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    p = NULL;
}

int main()
{
    int a = 200;
    int *p = &a;

    fun(p);

    if(p==NULL)
        cout<<" HI not found"<<endl;
    
    else
        cout<<*p<<endl;
    
}

