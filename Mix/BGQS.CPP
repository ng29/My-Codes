#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,l,r,x,y,i,ans=0,prod=1,c2=0,c5=0;
		cin>>n>>m;
		long long int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		while(m--){
			long long int q;
			cin>>q>>l>>r;
			if(q==1){
				cin>>x;
				for(i=l;i<=r;i++)
					a[i]=a[i]*x;
			}
			if(q==2){
				cin>>y;
				for(i=l;i<=r;i++)
					 a[i]=(i-l+1)*y;
			}
			if(q==3){
				for(i=l;i<=r;i++)
				{
					while(a[i]%2==0){
						c2++;
						a[i]/=2;
					}  
					while(a[i]%5==0){
						 c5++;
						 a[i]/=5;
					} 
				}
			}
			if(c2>c5)	cout<<c5<<endl;
		else		cout<<c2<<endl;
		}
		
	}
}
