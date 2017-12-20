#include<bits/stdc++.h>

int cal(int x, int y, int z, int w, int c){
	long long int ans=x;
	
	ans=ans*c+y;
	ans=ans*c+z;
	ans=ans*c+w;
	
	return ans;
}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int a[n][4];
		for(i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
		
		int q;
		cin>>q;
		while(q--){
			vector<int>val;
			int t;
			cin>>t;
			for(j=0;j<n;j++){
				val.push_back(cal(a[j][0],a[j][1],a[j][2],a[j][3],t));
			}
			sort(val.begin(),val.end());
				for(int i=0;i<n;i++)
					cout<<val[i]<<" "<<endl;
					
				//cout<<val[0]<<endl;
		}
	}
}
