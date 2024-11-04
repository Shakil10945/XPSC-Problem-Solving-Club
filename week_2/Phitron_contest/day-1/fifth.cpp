#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int sum = 0;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            sum += vec[i];
        }

        if (sum >= n)
        {
            if(k==0 && sum%n == 0)      cout<<"YES"<<endl;
            else if(k==0 && sum%n !=0)  cout<<"NO"<<endl;
            else        cout<<"YES"<<endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}