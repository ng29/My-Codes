#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,flag=0;
		string s;
		cin>>s;
		for(i=0;i<s.size();i++){
			if((s[i]=='0' && s[i+1]=='1' && s[i+2]== '0' ) || ( s[i]=='1' && s[i+1]=='0' && s[i+2]== '1' ))
{
	flag=1;
	break;
		}		}
			if(flag)
			cout<<"Good"<<endl;
			else
			cout<<"Bad"<<endl;
	}
}
