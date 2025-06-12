#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin>>a>>b;

    cout<<__gcd(a,b); // O(log(min(a,b)))

    cout<< ((a*b)/__gcd(a,b))
    == cout<< ((a/__gcd(a,b)) * b);

    return 0;
}

