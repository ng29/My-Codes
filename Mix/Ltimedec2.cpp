#include<bits/stdc++.h>
using namespace std;

int fun(int n){
	if (n == 0)		return 0; 
    return (n % 9 == 0) ? 9 : (n % 9);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a,n;
		cin>>a>>n;
		long long int res=pow(a,n);
		long long int ans=fun(res);
		cout<<ans<<endl;
	}
}
