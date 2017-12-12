#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int f=0,n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		
		for(i=0;i<n-1;i++){
			if(abs(a[i]-a[i+1])>	1){
				f=1;
				break;
			}
			
		}
		if(f==1)
		cout<<"NO"<<endl;
		
		else cout<<"YES"<<endl; 
	}
}
