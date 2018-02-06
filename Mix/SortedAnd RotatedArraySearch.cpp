#include<bits/stdc++.h>
using namespace std;

int srs(int a[],int l,int h,int x){
	if(l>h)	return -1;
	int mid=(l+h)/2;
	if(a[mid]==x)	return mid;
	
	if(a[l]<=a[mid]){
		if(x>=a[l]&& x<=a[mid])
			return srs(a,l,mid-1,x);
			
		return srs(a,mid+1,h,x);
	}
	if(x>=a[mid]&& x<=a[h])
		return srs(a,mid+1,h,x);
	return srs(a,l,mid-1,x);
}
int main(){
	int i,n,x;
	cin>>n>>x;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int check=srs(a,0,n-1,x);
	
	if(check!=-1)	cout<<check<<endl;
	else			cout<<"HAAWWWWWWW"<<endl;
}
