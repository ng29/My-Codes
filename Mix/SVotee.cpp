#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i,j,c=0,count;
		cin>>n>>k;
		int a[n],f[101]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++){
			f[a[i]-1]++;
		}
		for(i=0;i<n;i++){
			if(f[i]>=k && a[i]!=i+1)
			c++;
			else if(a[i]=i+1)
			c--;
		}
		cout<<c<<endl;	
}
}
