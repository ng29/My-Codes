#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,i,c=1;
		cin>>n>>x;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		
		for(i=0;i<n-1;i++){
			if(a[i]==a[i+1])
			continue;
			else
			c++;
		}
		if(c==x)	cout<<"Good"<<endl;
		else if(c<x) cout<<"Bad"<<endl;
		else if(c>x)cout<<"Average"<<endl;
	}
}
