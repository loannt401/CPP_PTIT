#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int snt(int n){
   for(int i=2; i<=sqrt(n); i++){
      if(n%i==0)  return 0;
   }
   return n>1;
}

int main(){
   int t; cin>>t;
   while(t--){
      int n, dem=0; cin>>n;
      for(int i=1; i<n; i++){
         if(__gcd(i,n)==1) dem++;
      }
      if(snt(dem)) cout<<'1'<<endl;
      else cout<<'0'<<endl;
   }
   return 0;
}