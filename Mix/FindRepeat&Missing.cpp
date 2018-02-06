#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"REPAETED ELEMENT IS"<<endl;//repeating one
	for(i=0;i<n;i++){
		if(a[abs(a[i])-1]>0)
			a[abs(a[i])-1]=-a[abs(a[i])-1];
		else
			cout<<abs(a[i])<<endl;
	}
	cout<<"MISSING ELELENT IS "<<endl;//missing element is :-
	for(i=0;i<n;i++){
		if(a[i]>0)
		cout<<i+1<<endl;
	}
}
