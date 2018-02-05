#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p,i,cc=0,ch=0;
		cin>>n>>p;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		
		int cake=0,hard=0;
		cake=p/2;
		hard=p/10;
		
		for(i=0;i<n;i++){
			if(a[i]>=cake)			cc++;
			else if (a[i]<=hard)	ch++;
		}
		
		if(cc==1 && ch==2)	cout<<"yes"<<endl;
		else				cout<<"no"<<endl;
	}
}
