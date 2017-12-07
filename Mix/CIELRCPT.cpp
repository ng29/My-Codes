#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,mod=0,po;
		cin>>p;
		for(int i=12;i>=1;i--)
		{
			po=pow(2,i-1);
			mod+=p/po;
			p=p%po;
		}
		cout<<mod<<endl;
	}
}
