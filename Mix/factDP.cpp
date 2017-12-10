#include<bits/stdc++.h>
using namespace std;
int a[1000002]={0};

long long factp(int n){
	if(n>=0){
		a[0]=1;
		for(int i=1;i<=n;i++){
			a[i]=i*a[i-1];
		}
		return a[n];
	}
} 
int main(){
	int n;
	cout<<"Enter the no to find fact"<<endl;
	cin>>n;
	cout<<factp(n)<<endl;
}
