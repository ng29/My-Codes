#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	string encoding="";
	int i,cnt;
	
	for(i=0;str[i];i++){
		cnt=1;
		while(str[i]==str[i+1])
			cnt++,i++;
		
		encoding += to_string(cnt) + str[i];
	}
	cout<<encoding<<endl;
}
