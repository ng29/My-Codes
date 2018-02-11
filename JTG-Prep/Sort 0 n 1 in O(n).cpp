#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,c0=0,c1=0;
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		if(a[i]==0)	c0++;
		else		c1++;
	}
	//cout<<c0<<""<<c1<<endl;
	for(i=0;i<c0;i++)	a[i]=0;
	
	for(i=c0;i<c0+c1;i++)	a[i]=1;
	
	for(i=0;i<n;i++)
	cout<<a[i]<<"";
}
