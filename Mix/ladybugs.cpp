#include<bits/stdc++.h>
using namespace std;
int main(){
	int g;
	cin>>g;
	while(g--){
		int n,i,l,f=0,cu=0,c=0,lo=0;
		cin>>n;
		char  b[n];
		for(i=0;i<n;i++)
			cin>>b[i];
		int count[26]={0};	
		 	while(b[c]!='\0')
 			  {
     			 if(b[c]>='A' && b[c]<='Z')
         				count[b[c]-'A']++;
      					c++;
   		}
		for(c=0;c<26;c++){
			if(count[c]!=0)
			cout<<count[c]<<endl;
		}
		for(i=0;i<n;i++){
			if(b[i]=='_')
			cu++;
		}
		lo+=sizeof(count);
		cout<<lo<<endl;
		for(i=0;i<26;i++){
			if(count[i]>1)
			f++;	
		}
		if(f==lo && cu>=1 )
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
