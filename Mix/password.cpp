#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int s=0,n,i;
		cin>>n;
		long long int r=sqrt(n);
		for(i=1;i<=r;i++)
		{
			if(n%i==0){
					s+=i;
					s+=n/i;
			}
		}
		if((r*r)==n)
		{
			s-=r;
	}
		cout<<s<<endl;
	}
}
