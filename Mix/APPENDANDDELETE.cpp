#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	int i,j,k,c=0;
	cin>>k;
	int a=s.length(),b=t.length();
	
	if(a!=b){
		if(a<b){
			if(k>(2*a)-1)
				cout<<"Yes"<<endl;
		}
		
	}
	
	if(a==b && k>=(2*a)+1)
	cout<<"Yes"<<endl;
	
	if(k<a+b) cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
}
