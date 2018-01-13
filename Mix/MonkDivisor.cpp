#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,p,q,n,i,ans=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>t;
	while(t--){
		cin>>p>>q;
		sort(a,a+n);
		ans=0;
		for(i=0;i<n;i++){
			if(a[i]%p==0 || a[i]%q==0 || (a[i]%p==0 && a[i]%q==0))
			ans++;
		}
		cout<<ans<<endl;
	}
}
