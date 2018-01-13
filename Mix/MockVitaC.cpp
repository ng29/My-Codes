#include<iostream>
using namespace std;
int main(){
	int i,n,flag=0,diff,check=1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-2;i++){
		diff=a[i+1]-a[i];
		if(diff==3){
			continue;
		}
		else{
			if(diff<3){
				a[i+1]+=(3-diff);
				a[i+2]-=(3-diff);
				flag++;
			}
			else{
				a[i+1]-=(diff-3);
				a[i+2]+=(diff-3);
				flag++;
			}
		}
	}
	
		if(a[n-1]!=(a[0]+(n-1)*3)){
			check=0;}
	
	if(check==0){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<""<<flag<<endl;
	}
}
