//Chinese remainder theorem
//https://www.math.okstate.edu/~wrightd/crypt/lecnotes/node21.html
#include<iostream>
using namespace std;

int crt(int m,int n,int &x,int &y)
{
    if(m==0)
    {
        x=0,y=1;
        return n;
    }
    int x1,y1;
    int d = crt(n%m,m,x1,y1);
    x = y1-(n/m)*x1;
    y = x1;
    return d;
}

int main()
{
    int a,b;
    int m=3,n=5;
    cin>>a>>b;
    int x,y;
    int p = crt(m,n,x,y);
    cout<<x<<" "<<y<<endl;
    int s = m*x*b+n*y*a;
    cout<<s<<endl;
    return 0;

}
