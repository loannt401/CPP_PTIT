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

void chuyenvemang(char x[], char y[]){
   int len1 = strlen(x), len2=strlen(y), n=0;
   int a[len1], b[len1], c[len1];
   for(int i=0; i<len1; i++) a[i]=(int)(x[i]-'0');
   for(int i=0; i<len2; i++) b[i]=(int)(y[i]-'0'); 
   daonguoc(a,len1); daonguoc(b,len2);
   for(int i=len2; i<len1; i++) b[i]=0;
   int nho=0;
   for(int i=0; i<len1; i++){
      int hieu=a[i]-b[i]-nho;
      if(hieu<0){
         nho=1;
         c[n++]=hieu+10;
      } else {
         c[n++]=hieu;
         nho=0;
      }
   }
   for(int i=n-1; i>=0; i--){
      cout<<c[i];
   }
}

int main(){
   int t;
   cin>>t;
   while(t--){
      char x[1001], y[1001];
      cin>>x>>y;
      if(strlen(x)>strlen(y) || (strlen(x)==strlen(y) && strcmp(x,y)>0)) chuyenvemang(x,y);
      else chuyenvemang(y,x);
      cout<<endl;
   }
   return 0;
}
