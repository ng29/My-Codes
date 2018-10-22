#include<iostream>
#include<cstring>
using namespace std;
#define N 101
int main()
{
    //int j,k;
    char a[N];
    char r[N];
    cin>>a;
    char temp[N];
    char temp1[N];
    int len=strlen(a);
    int j;

    for(int i=len-1,j=N-1;i>=0;i--,j--)
    {
        temp[j]=a[i];
    }
    for(int i=0;i<N-len;i++)
        temp[i]='0';
    for(int i=0;i<N;i++)
    {
        a[i]=temp[i];
    }
    /*for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }*/
    //cout<<endl;
    //cout<<"********"<<endl;
    char b[N];
    cin>>b;
    int len1 = strlen(b);
    int k=0;
    /////////////////////////////////
    for(int i=len1-1,k=N-1;i>=0;i--,k--)
    {
        temp1[k]=b[i];
    }
    for(int i=0;i<N-len1;i++)
        temp1[i]='0';
    for(int i=0;i<N;i++)
    {
        b[i]=temp1[i];
    }
    //for(int i=0;i<5;i++)
      //  cout<<b[i];
    //cout<<"*****"<<endl;
    //substraction
    for(int i=N-1;i>=0;i--)
    {
        if(a[i]>=b[i])
        {
            r[i]=int((int)a[i]-(int)b[i])+48;
        }
        else
        {
            r[i]= (int)((int)a[i]+10 -(int)b[i])+48;
            a[i-1]=(int)((int)a[i-1]-1);
        }
    }
    int f=0;
    while(r[f]=='0')
    {
        f++;
    }
    if(strlen(r)==f)
    {
        cout<<'0'<<endl;
    }
    else
    {
        for(int i=f;i<N;i++)
        cout<<r[i];
    }
    return 0;
}
