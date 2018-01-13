#include<iostream>
using namespace std;
int main(){
	long long int n,k,i,j,temp;
	cin>>n>>k;
	int a[n];
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]%k <= a[j]%k){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=n;i>=1;i--)
	cout<<a[i]<<" ";
}
