#include<bits/stdc++.h>
using namespace std;

bool canplace(int cows, int pos[], int n ,int mid){
	int count=1,i;
	int position=pos[0];
	
	for(i=1;i<n;i++){
		if(pos[i]-position>=mid){
			position=pos[i];
			count++;	
		}if(count==cows)	return true;
	}return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c,i,mid,ans=-1;
		cin>>n>>c;
		int pos[n];
		
		for(i=0;i<n;i++)
		cin>>pos[i];
		
		sort(pos,pos+n);
		int start=pos[1]-pos[0];
		int end=pos[n-1]-pos[0];
		
		while(start<=end){
			mid=start+(end-start)/2;
			if(canplace(c,pos,n,mid)){
				ans=mid;
				start=mid+1;
			}else
				end=mid-1;
		}
		cout<<ans<<endl;
	}
}

