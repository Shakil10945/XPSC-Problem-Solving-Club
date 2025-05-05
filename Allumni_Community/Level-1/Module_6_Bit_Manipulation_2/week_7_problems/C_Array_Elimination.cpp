#include<cstdio>
#include<algorithm>
using namespace std;
int _,n,a[200001],j,ans,cnt,i;
int main(){
	scanf("%d",&_);
	while(_--){
		scanf("%d",&n);
		for(i=1;i<=n;i++)scanf("%d",&a[i]);
		ans=0;
		for(i=0;i<=30;i++){
			cnt=0;
			for(j=1;j<=n;j++)cnt+=a[j]>>i&1;
			ans=__gcd(ans,cnt);
		}
		for(i=1;i<=n;i++)if(ans%i==0)printf("%d ",i);puts("");
	}
}