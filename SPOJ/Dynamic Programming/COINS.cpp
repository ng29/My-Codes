#include<bits/stdc++.h>
using namespace std;
vector<long long int>v(1000000000);
long long int calc(long long int n){
	if(n<12)	
		return n;
	else if(v[n]!=0)	
		return v[n];
	else
		return (v[n]=max(calc(n/2)+calc(n/3)+calc(n/4),n));
}
int main(){
	long long int n;
	//cin>>n;
	while(cin>>n){
		cout<<calc(n)<<endl;
	}
}
