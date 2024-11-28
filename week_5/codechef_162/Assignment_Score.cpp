#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0; i<n; i++)  cin>>v[i];
	    
	    int sum = accumulate(v.begin(), v.end(), 0);

        int need = (n+1) *50;

        if(need - sum> 100) cout<<-1<<endl;
        else if(need - sum <=0)     cout<<0<<endl;
        else        cout<<need-sum<<endl;
	}
    return 0;
}
