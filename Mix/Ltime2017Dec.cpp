#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ans[8]={4,4,4,4,4,4,4};
		int w,i;
		string s;
		cin>>w>>s;
		if(w==28){
			for(i=0;i<7;i++)
		cout<<ans[i]<<" ";
		cout<<endl;
		continue;
		}
		 if(w==29){
			if(s=="mon"){
				ans[0]++;
			}
			else if(s=="tues"){
				ans[1]++;
				
			}
			else if(s=="wed"){
				ans[2]++;
				
			}
			else if(s=="thurs"){
				ans[3]++;
				
			}
			else if(s=="fri"){
				ans[4]++;
				
			}
			else if(s=="sat"){
				ans[5]++;
				
			}
			else if(s=="sun"){
				ans[6]++;
			
			}
		}
		 if(w==30){
			if(s=="mon"){
				ans[0]++;
				ans[1]++;
			}
			else if(s=="tues"){
				ans[1]++;
				ans[2]++;
			}
			else if(s=="wed"){
				ans[2]++;
				ans[3]++;
			}
			else if(s=="thurs"){
				ans[3]++;
				ans[4]++;
			}
			else if(s=="fri"){
				ans[4]++;
				ans[5]++;
			}
			else if(s=="sat"){
				ans[5]++;
				ans[6]++;
			}
			else if(s=="sun"){
				ans[6]++;
				ans[0]++;
			}
				
		}else if(w==31){
				if(s=="mon"){
				ans[0]++;
				ans[1]++;
				ans[2]++;
			}
			else if(s=="tues"){
				ans[1]++;
				ans[2]++;
				ans[3]++;
			}
			else if(s=="wed"){
				ans[2]++;
				ans[3]++;
				ans[4]++;
			}
			else if(s=="thurs"){
				ans[3]++;
				ans[4]++;
				ans[5]++;
			}
			else if(s=="fri"){
				ans[4]++;
				ans[5]++;
				ans[6]++;
			}
			else if(s=="sat"){
				ans[5]++;
				ans[6]++;
				ans[0]++;
			}
			else if(s=="sun"){
				ans[6]++;
				ans[0]++;
				ans[1]++;
			}
			
		}
		
			for(i=0;i<7;i++)
		cout<<ans[i]<<" ";
		cout<<endl;
		
	}
}
