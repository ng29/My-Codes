#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,l,b;
		cin>>n;
		cin>>l>>b;
		if((abs(l-b)==l || abs(l-b)==b ) && n>2)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<abs(l-b)<<endl;
	}
}
