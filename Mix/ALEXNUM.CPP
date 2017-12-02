#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		long long int ans=n*(n-1)/2;
		cout<<ans<<endl;
	}
}
