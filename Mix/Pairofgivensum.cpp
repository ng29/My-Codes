#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

void pairsdisp(int a[],int n,int s){
	int i,temp;
	bool binMap[MAX]={0};
	
	for(i=0;i<n;i++){
		temp=s-a[i];
		if(temp>=0 && binMap[temp]==1)
		cout<<a[i]<<" "<<temp;
		binMap[a[i]]=1;
	}
}
int main(){
	int n,i,s;
	cin>>n>>s;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	pairsdisp(a,n,s);
}
