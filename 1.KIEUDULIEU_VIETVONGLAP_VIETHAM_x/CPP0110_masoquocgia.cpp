#include<iostream>
#include<string.h>
using namespace std;

void loc084(char c[]){
   for(int i=0; i<strlen(c)-2; i++){
      if(c[i]=='0'&&c[i+1]=='8'&&c[i+2]=='4'){
         c[i]=c[i+1]=c[i+2]='x';
      }
   }
   for(int i=0; i<strlen(c);i++){
      if(c[i]!='x') cout<<c[i];
   }
   cout<<endl;
}

int main(){
   int t; cin>>t;
   while(t--){
      char str[18];cin>>str;
      loc084(str);
   }
   return 0;
}