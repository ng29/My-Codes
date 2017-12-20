#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int x,n,m,i,j,l,ans=0;
	bool f=true;
	cin>>n>>m;
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	int min=b[0],max=a[0];
	for(i=1;i<m;i++){
		if(b[i]<min)
		min=b[i];
	}
	for(j=1;j<n;j++){
		if(a[j]>max)
		max=a[j];
	}
	if(max>min || max==0)
			cout<<ans<<endl;
		else if(max==min){
			ans++;
			cout<<ans<<endl;
		}
		else{
	for(x=max;x<=min;x++){
		for(i=0;i<n;i++){
			if(x%a[i]!=0)	{f=false;
			}
		}
		for(i=0;i<m;i++){
			if(b[i]%x!=0)	{
			f=false;}
		}
		if(f==true) ans++;
	}
	cout<<ans<<endl;
}
}
