#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,s1=0,s2=0;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
			s1+=a[i][j];
			if(i+j==2)
			s2+=a[i][j];
		}
	}
	cout<<abs(s1-s2)<<endl;
}
