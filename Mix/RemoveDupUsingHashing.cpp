#include<bits/stdc++.h>
using namespace std;

char* remove(char* str){
	bool bin_hash[255]={0};
	int ip_ind=0;
	int res_ind=0;
	char temp;
	
	while(*(str+ip_ind)){
		temp=(*(str+ip_ind));
		if(bin_hash[temp]==0){
			bin_hash[temp]=1;
			(*(str+res_ind))=(*(str+ip_ind));
			res_ind++;
		}ip_ind++;
	}*(str+res_ind)='\0';
	
	return str;
}
int main(){
	int i,n;
	cin>>n;
	char str[n];
	for(i=0;i<n;i++)	cin>>str[i];
	
	cout<<remove(str)<<endl;
}
