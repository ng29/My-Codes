#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,len=0,right,left,min;
		cin>>n;
		string e;
		cin>>e;
		int x[n];
		for(i=0;i<n;i++)
		cin>>x[i];
		for(i=0;i<n;i++)
		{
			if(e[i]=='0')
			{
				right=(x[i+1]-x[i]);
				left=(x[i]-x[i-1]);
			}
		}
		if(right>left)
		min=left;
		else
		min=right;
		cout<<abs(min)<<endl;
	}
}
