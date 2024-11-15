#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int shreeja=0;
    int dima =0;
    int cnt = 1;

    for(int i=0, j=n-1; i<=j; )
    {
        if(v[i]<v[j])
        {
            if(cnt%2!=0)
            {
                shreeja+=v[j];
            }
            else
            {
                dima+=v[j];
            }
            j--;
        }
        else if(v[j]<=v[i])
        {
            if(cnt%2!=0)
            {
                shreeja+=v[i];
            }
            else
            {
                dima+=v[i];
            }
            i++;
        }
        cnt++;
    }

    cout<< shreeja<<" "<<dima<<endl;
    

    return 0;
}