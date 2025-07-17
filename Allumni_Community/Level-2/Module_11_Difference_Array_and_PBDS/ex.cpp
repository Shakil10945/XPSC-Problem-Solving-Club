#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, d;
        cin>>n>>d;
        if(d <= 1)
        {
            cout << -1 << endl;
            continue;
        }
        if(n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        if(n == 3)
        {
            if(d != 2)
            {
                cout << -1 << endl;
            } 
            else 
            {
                cout << "001"<<endl;
                cout<<"100"<<endl;
                cout<<"010"<<endl;
            }
            continue;
        }
        if(n==4)
        {
            if(d!=3)
                cout<<-1<<endl;
            else
            {
                cout<<"0100"<<endl;
                cout<<"0011"<<endl;
                cout<<"1000"<<endl;
                cout<<"1010"<<endl;
            }
            continue;
        }

        if(d==n-1)
        {
            vector<string>vec(n, string(n, '0'));
            for(int i=1; i<=n; i++)
            {
                for(int j=i+1; j<=n;j++)
                {
                    if((j==i+1)||(i==1 && j==n))
                        vec[i-1][j-1] = '1';
                    else
                        vec[j-1][i-1]='1';
                }
            }
            for(int i=0; i<n; i++)
                cout<<vec[i]<<endl;
            continue;
        }

        if(d == n-2)
        {
            vector<string> vec(n, string(n,'0'));
            int m = n-1;
            for(int i=1;i<=m;i++)
            {
                for(int j=i+1;j<=m;j++)
                {
                    if(j == i+1)
                    {
                         vec[i-1][j-1] = '1';
                    } 
                    else 
                    {
                        vec[j-1][i-1] = '1';
                    }
                }
            }
            
            for(int i=1;i<=m;i++)
            {
                if(i == m-1)
                {
                    vec[m-1][n-1] = '1';
                } 
                else 
                {
                    vec[n-1][i-1] = '1';
                }
            }
            
            for(int i=1;i<=n;i++)
            {
                for(int j=i+1;j<=n;j++)
                {
                    if(vec[i-1][j-1]=='0' && vec[j-1][i-1]=='0')
                    {
                        vec[i-1][j-1] = '1';
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                cout<<vec[i]<<endl;
            }
            continue;
        }
        
        int m = d+1;
        vector<string> vec(n, string(n,'0'));
        for(int i=1;i<=m;i++)
        {
            for(int j=i+1;j<=m;j++)
            {
                if(j == i+1)
                {
                    vec[i-1][j-1] = '1';
                } 
                else 
                {
                    vec[j-1][i-1] = '1';
                }
            }
        }
        if(m+1 <= n)
        {
            vec[m-1][m] = '1';
        }
        
        for(int k = m+1; k < n; k++)
        {
            vec[k][k+1-1] = '1';
        }
        for(int k=m; k< n; k++)
        {
            vec[k-1][k] = '1'; 
        }
        for(int k=m+1; k<=n; k++)
        {
            for(int i=2; i<=m; i++)
            {
                if(vec[k-1][i-1]=='0' && vec[i-1][k-1]=='0')
                {
                    vec[k-1][i-1] = '1';
                }
            }
        }
        for(int k=m+1; k<=n; k++)
        {
            if(vec[0][k-1]=='0' && vec[k-1][0]=='0')
            {
                vec[0][k-1] = '1';
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(vec[i-1][j-1]=='0' && vec[j-1][i-1]=='0')
                {
                    vec[i-1][j-1] = '1';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<endl;
        }
    }
    return 0;
}





