#include<iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--){
		int n;
		cin>>n;
		char a[2][n];
		
		for(int i=0;i<2;i++)
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
		
		int count=0,flag=0;
		
		for(int i=0;i<n;i++)
		{
			if(a[0][i]=='*'){
				flag=1;break;
			}
		}
		
		if(flag==1)
		{
			for(int i=0;i<n;i++)
		{
			if(a[1][i]=='*'){
				count++;break;
			}
		}}
	
	int count1=0,count2=0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[0][i]=='*'){
			count1++;
		}
		if(a[1][i]=='*'){
			count2++;
		}
		
		if(count1 == 2 || count2 == 2){
			if(count1==2 && count2==2){
				count++;
				count1=1;
				count2=1;
			}
			else if(count1==2){
				count++;
				count1=1;
				count2=0;
			}
			else if(count2==2){
				count++;
				count1=0;
				count2=1;
			}
		}
		
	}
	
	cout<<count<<endl;
		
	}
		
return 0;
}
