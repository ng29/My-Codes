#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int k=1,i,l;
   for(i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
       		if(i==j)
       			cout<<k++;
       		else
          		cout<<k++<<"*";
          }
   cout<<endl;
   }  
    l=k-i+1;
   for(int i=n;i>=1;i--){
       for(int j=1;j<=i;j++){
       	if(i==j)	cout<<l++;
       	else
          cout<<l++<<"*";
          }
     l=(l-1)-2*(i-1);      
   cout<<endl;
   } 
}
