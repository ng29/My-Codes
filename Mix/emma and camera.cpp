#include<iostream>
using namespace std;
int main(){
	long long int n,x,fact=1,i;
	cin>>n>>x;
	for(i=1;i<=n;i++)
	fact=fact*i;
	
	//cout<<fact<<endl;
	
	if(fact+1<x)
	cout<<x-fact-1<<endl;
	else
	cout<<fact-x+1<<endl;
}
