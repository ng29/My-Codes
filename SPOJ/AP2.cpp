#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int th,thl,s,f,n,i,d;
		cin>>th>>thl>>s;
		
		n=(2*s)/(th+thl);
		d=(thl-th)/(n-5);
		f=th-2*d;
		
		cout<<n<<endl;
		for(i=1;i<=n;i++)
			cout<<(f+(i-1)*d)<<" ";
	}
}
