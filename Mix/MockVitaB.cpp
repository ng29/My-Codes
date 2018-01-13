#include<bits/stdc++.h>
using namespace std;

int pChooser( int p, int r )
{
    if (r > p) return 0;
    if (r * 2 > p) r = p-r;
    if (r == 0) return 1;

    int result = p;
    for( int i = 2; i <= r; ++i ) {
        result *= (p-i+1);
        result /= i;
    }
    return result;
}
int main(){
	int n,k,j,sum=0;
	cin>>n>>k;
	for(j=0;j<=k;j+=2){
		sum+=pChooser(n,j);
	}
	cout<<(sum%1000000007)<<endl;
	
}
