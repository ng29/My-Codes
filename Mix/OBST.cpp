#include<bits/stdc++.h>
using namespace std;
int sum(int freq[],int i,int j){
	int s=0;
	for(int k=i;k<=j;k++)
		s+=freq[k];
	return s;
}
int optCost(int freq[],int i,int j){
	int min=INT_MAX;
	int fsum=sum(freq,i,j);
	if(j<i)	return 0;
	if(j==i)	return freq[i];
	for(int r=i;r<=j;r++){
		int cost=optCost(freq,i,r-1) + optCost(freq,r+1,j);
		if(cost<min)	min=cost;
	}
	return fsum+min;
}
int optimalTree(int keys[],int freq[],int n){
	return optCost(freq,0,n-1);
}
int main(){
	int keys[] = {10, 12, 20};
    int freq[] = {34, 8, 50};
    int n = sizeof(keys)/sizeof(keys[0]);
    cout<<" YAYYAYAYAYAYAYA"<<endl;
    cout<<optimalTree(keys,freq,n);
}
