#include<iostream>
#include<cmath>
using namespace std;

/*
void fibo(int n){
   long long fn[n];
   f[0]=0;
   f[1]=1;
   for(int i=2; i<=n; i++){
      fn[i] = fn[i-1] + fn[i-2];
   }
}
*/

// neu n la so fibonacc thi 5*n^2+4 || 5*n^2-4 la so chinh phuong

int sochinhphuong(long long n){
   if(sqrt(n)==(int)sqrt(n)) return 1;
   else return 0;
}

int sofibonacc(int n){
   long long fn1 = 1ll * 5 * (int)pow(n,2) + 4;
   long long fn2 = 1ll * 5 * (int)pow(n,2) - 4;
   if(sochinhphuong(fn1) || sochinhphuong(fn2)) return 1;
   return 0;
}

int main(){
   int t; cin >>t;
   while(t--){
      int n; cin>>n;
      int a[n];
      for(int i=0; i<n; i++) cin>>a[i];
      for(int i=0; i<n; i++){
         if(sofibonacc(a[i])) cout<<a[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}