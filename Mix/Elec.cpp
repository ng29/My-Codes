#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,c=0,ans;
		cin>>n;
		string e;
		cin>>e;
		int x[n];
		for(i=0;i<n;i++)
		cin>>x[i];
		
		for(i=0;i<n;i++)
		{
			if(e[i]=='1')
				c++;
		}
		if(c==1)
			ans=x[n-1]-x[0];
		else
		{
			// int startpointer=0;
			//int endpointer;
			// for(i=0;i>n-1;i++)
		//	{
		//		if(e[i]=='1')
		//		endpointer=i;
		//	}
		}
	}
}
