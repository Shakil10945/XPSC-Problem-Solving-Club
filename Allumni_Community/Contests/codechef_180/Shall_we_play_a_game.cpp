#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long mod=998244353;
    long long  t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long ans=0;
        long long maxi=0,mini=0;
        long long d=1;
        if(n%2){
            long long x=1;
            for(long long i=1;i<=n-1;i++){
                x=x%mod;
                x=x*2;
            }
            x=x%mod;
            cout<<x<<endl;
        }
        else{
            long long x1=1,x2=1;
            for(long long i=1;i<=n-2;i++){
                x1=x1%mod;
                x1=x1*2;
            }
            x1=x1%mod;
            long long x=1;
            for(long long i=1;i<=n;i++){
                x2=x2%mod;
                x2=x2*2;
            }
            x2=x2%mod;
            cout<<(x2-x1+mod)%mod<<endl;
        }
    }
}