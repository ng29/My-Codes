#include<iostream>
using namespace std;
int main(){
	int n,m,i,s=0;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		s+=n;
		break;
	}
	cout<<s<<endl;
	if(s==m)
	cout<<"possible"<<endl;
	else
	cout<<"impossible"<<endl;
}
