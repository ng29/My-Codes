#include<bits/stdc++.h>
using namespace std;

int multiply(int x, int a[],int s){
	int carry=0;
	
	for(int i=0;i<s;i++){
		int prod=a[i] * x + carry;
		a[i]=prod%10;
		carry=prod/10;
	}
	while(carry){
		a[s]=carry%10;
		carry=carry/10;
		s++;
	}return s;
}
void fact(int n){
		int i,x;
		int a[1000];
		int s=1;
		a[0]=1;
		for(x=2;x<=n;x++)
			s=multiply(x,a,s);
		for(i=s-1;i>=0;i--)
			cout<<a[i];
			cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		fact(n);
	}
}
