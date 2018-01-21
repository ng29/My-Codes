#include<iostream>
using namespace std;
int main(){
	int n,i,b,c,sum=0;
	cin>>n;
	int a=5;
	for(i=0;i<n;i++){
		b=a/2;
		c=b*3;
		a=c;
		sum+=b;
	}
	cout<<sum<<endl;
}
