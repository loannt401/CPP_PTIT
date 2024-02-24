#include<iostream>
#include<string.h>
using namespace std;

void daonguoc(int a[], int n){
   int l=0, r=n-1;
   while(l<r){
      int trao=a[l];
      a[l]=a[r];
      a[r]=trao;
      ++l; --r;
   }
}

void chuyenvemang(string x, string y){
   int len1 = x.length(), len2=y.length(), n=0;
   int a[len1], b[len1], c[len1+1];
   for(int i=0; i<len1; i++) a[i]=(int)(x[i]-'0');
   for(int i=0; i<len2; i++) b[i]=(int)(y[i]-'0'); 
   daonguoc(a,len1); daonguoc(b,len2);
   for(int i=len2; i<len1; i++) b[i]=0;
   int nho=0;
   for(int i=0; i<len1; i++){
      int tong=a[i]+b[i]+nho;
      c[n++]=tong%10;
      nho=tong/10;
   }
   if(nho) c[n++]=nho;
   for(int i=n-1; i>=0; i--) cout<<c[i];
}

int main(){
   int t;
   cin>>t;
   while(t--){
      string x, y;
      cin>>x>>y;
      if(x.length()>=y.length()) chuyenvemang(x,y);
      else chuyenvemang(y,x);
      cout<<endl;
   }
   return 0;
}
