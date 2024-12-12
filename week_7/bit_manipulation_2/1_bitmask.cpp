#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0; i<n;i++)   cin>>ar[i];
    cout<<"    ";
    for(auto &it: ar)    cout<<it<<" ";
    cout<<endl;

    for(int mask = 0; mask< (1<<n); mask++)
    {
        cout<< mask<< " -> ";
        for(int k=0; k<n; k++)
        {
            if((mask >> k) &1)
                cout<<1<<"  ";
            else
                cout<<0<< "  ";
        }
        cout<<endl;
    }

    return 0;
}