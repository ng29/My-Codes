#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,sum=0;
		cin>>n;
		int f[n];
		for(i=0;i<n;i++)
		cin>>f[i];
		int w,y;
		cin>>w>>y;
		sort(f,f+n);
		if(y>n || w<n)
			cout<<"Not Possible"<<endl;
		else if((w-y+1)>=0)
			{
				sum+=(f[0]*(w-y+1))+f[1]+f[2];
		cout<<sum<<endl;
			}
		
	}
}
