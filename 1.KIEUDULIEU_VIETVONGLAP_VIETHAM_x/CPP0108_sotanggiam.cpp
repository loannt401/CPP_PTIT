#include<iostream>
#include<cmath>
using namespace std;

int snt(int x){
   for(int i=2; i<=sqrt(x); i++){
      if(x%i==0) return 0;
   }
   return x>1;
}

int tang(int n){
   while(n>=10){
      int s1=n%10;
      int s2=(n/10)%10;
      if(s1<=s2) return 0;
      n/=10;
   }
   return 1;
}

int giam(int n){
   while(n>=10){
      int s1=n%10;
      int s2=(n/10)%10;
      if(s1>=s2) return 0;
      n/=10;
   }
   return 1;
}

int main(){
   int t; cin>>t;
   while(t--){
      int n,dem=0; cin>>n;
      for(int i=pow(10,n-1); i<pow(10,n); i++){
         if((tang(i)||giam(i))&&snt(i)) dem++;
      }
      cout<<dem<<endl;
   }
   return 0;
}