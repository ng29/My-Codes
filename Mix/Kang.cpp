#include<iostream>
using namespace std;
int main()
{
	int x1,v1,x2,v2,i,k1,k2,flag=0;
	cin>>x1>>v1>>x2>>v2;
	for(i=1;i<10000;i++)
	{
		k1=x1+(i*v1);
		k2=x2+(i*v2);
		if(k1==k2)
		{
			flag++;
			break;
		}
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else if (!flag)
	cout<<"NO"<<endl;
	else if(x1<=x2 && v2>v1)
		cout<<"NO"<<endl;
}
