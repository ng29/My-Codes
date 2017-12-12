#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,si=0,sj=0;
		cin>>n;
		int x[n],y[n];
		for(i=0;i<n;i++)	cin>>x[i];
		for(j=0;j<n;j++)	cin>>y[j];
		
		for(i=0;i<n;i+=2)	si+=x[i];
		for(j=1;j<n;j+=2)	si+=y[j];
		
		for(i=1;i<n;i+=2)	sj+=x[i];
		for(j=0;j<n;j+=2)	sj+=y[j];
		
		if(si>sj)	cout<<sj<<endl;
		else 		cout<<si<<endl;
	}
}
