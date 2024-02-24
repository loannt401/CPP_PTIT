#include<iostream>
#include<algorithm>
using namespace std;

int main(){
   int t; cin>>t;
   while(t--){
      long long a,x,y; cin>>a>>x>>y;
      long long dem = __gcd(x,y);   // ucln
      for(int i=0; i<dem; i++) cout<<a;
      cout<<endl;
   }
   return 0;
}