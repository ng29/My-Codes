#include<stdio.h>
long long modexpo(long long a,long long b,long long n)
{
    long long d=1;
    while(b)
    {
        if(b%2)
            d=(d*a)%n;
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",modexpo(a,b,10));
    }
    return 0;
}
