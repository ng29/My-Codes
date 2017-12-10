#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,o,i,ans=0,j;
		cin>>l>>o;
		for(i=1;i<=l;i++){
			for(j=1;j<=l;j++){
				if((i+j)%o==0 && i<j)
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
