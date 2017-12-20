#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,s;
		cin>>n>>m>>s;
		if(m>n)
		cout<<s<<endl;
		else
		cout<<m+s-1<<endl;
	}
}
