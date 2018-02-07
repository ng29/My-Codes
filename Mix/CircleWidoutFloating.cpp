#include<bits/stdc++.h>
using namespace std;
int main(){
	int r;
	cin>>r;
	int i,n,x,y,j;
	n=2*r+1;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			x=i-r;
			y=j-r;
			
			if(x*x+y*y <= r*r+1)
				cout<<".";
			else
				cout<<" ";
				cout<<" ";
		}
		cout<<endl;
	}
}
