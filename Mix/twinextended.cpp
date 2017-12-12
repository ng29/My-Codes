#include<bits/stdc++.h>
using namespace std;
bool twincheck(int x){
	if (x<=1)	return false;
    if (x==2)   return false;
    if (x%2==0) return false;
            for (int i = 3;i<=sqrt(x) + 1;i +=2) {
                if (x%i==0||(x+2)%i==0) {
                    return false;
                }
            }
            return true;
}
int main(){
	int n,m,j,c=0;
	cin>>n>>m;
	bool check;
	for(j=n;j<=m-1;j++){
		check=twincheck(j);
		if(check){
			c++;
		}
	}
	cout<<c<<endl;
}
