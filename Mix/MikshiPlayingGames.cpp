#include<iostream>
using namespace std;
int main(){
	int div,n,q,c=0;
	cin>>n>>q;
	int i,a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	while(q--){
		c=0;
		int l,r;
		cin>>l>>r;
		for(i=l-1;i<r;i++){
			while(a[i]!=0){
			a[i]/=2;
			c++;
		}
	}	
		//cout<<c<<endl;
		if(c%2!=0)
		cout<<"Mishki"<<endl;
		else
		cout<<"Hacker"<<endl;
	}
}
