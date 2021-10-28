#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int x , y;
  cin>>x>>y;
  if(y > x or y < (x - 2) or y == x - 1){
   cout<<"No Number\n";
   continue;
  }
  if( (x&1) && (y&1)){ // ((x&1) is true when x is odd
   cout<<x+y-1<<endl;
   continue;
  }
  cout<<x+y<<endl;
 }
 return 0;
}
