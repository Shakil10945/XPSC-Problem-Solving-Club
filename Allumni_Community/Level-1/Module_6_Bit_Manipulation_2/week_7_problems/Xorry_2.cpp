#include <bits/stdc++.h>
#include <bit>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long x;
	    cin>>x;
	    x=(x^__bit_floor(x));
	    int zeros=(__bit_width(x)-__popcount(x));
	    cout<<(1<<zeros)<<endl;
	}
}