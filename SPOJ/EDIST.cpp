#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		int l1,l2,i,j,min,temp,ans=0;
		l1=x.size();
		l2=y.size();
		
		//cout<<l1<<l2<<endl;
		
		int a[l1+1][l2+1];
		
		for(i=0;i<=l2;i++)
			a[i][0]=i;
		for(j=0;j<=l1;j++)
			a[0][j]=j;
		
		for(i=1;i<=l1;i++){
			for(j=1;j<=l2;j++){
				if(x[i-1]==y[j-1])
					a[i][j]=a[i-1][j-1];
				else{
					temp=(a[i-1][j]<a[i-1][j-1])? a[i-1][j] : a[i-1][j-1];
					min=(a[i][j-1]<temp) ? a[i][j-1] : temp;
					a[i][j]=min+1;  
 				}
			}
		}
//		for(i=0;i<=l1;i++){
//			for(j=0;j<=l2;j++){
//				cout<<a[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		
		ans+=a[l1][l2];
		cout<<ans<<endl;
	}
}
