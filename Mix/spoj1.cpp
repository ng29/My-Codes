#include<iostream>
using namespace std;
void SieveOfEratosthenes(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++){
        if (prime[p] == true){
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p <<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		bool check;
		long long int j,n,m;
		cin>>m>>n;
		for(j=m;j<=n;j++){
			check=isPrime(j);
			if(check == true)
			cout<<j<<endl;
			else
			break;
		}
	}
}
