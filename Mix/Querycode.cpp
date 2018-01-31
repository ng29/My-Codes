#include<iostream>
using namespace std;
int main(){
	int n,i,c2=0,c5=0,l,r;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
		for(i=0;i<n;i++)
				{
					while(a[i]%2==0){
						c2++;
						a[i]/=2;
					}  
					while(a[i]%5==0){
						 c5++;
						 a[i]/=5;
					} 
				}
			if(c2>c5) cout<<c5<<endl;
			else 		cout<<c2<<endl;
}
