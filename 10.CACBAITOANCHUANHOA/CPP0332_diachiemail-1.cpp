// CACH 1:
#include <iostream>
#include<string.h>
using namespace std;

 
int main() {
   string str;
   getline(cin,str);
   int len = str.length();
   string s="";
   int k;
   int kt=0;
   for(int i=0; i<len; i++){
      if(str[i]>='A' && str[i]<='Z') str[i]+=32; 
   }
   for(int i=len-1; i>=0; i--){
      if(str[i] !=' ' && str[i-1]==' '){
         k=i;
         break;
      }
      else if(i==0) kt=1; k=i;
   }
   for(int i=k; i<len; i++){
      s+=str[i];
   }
   if(kt==0) s+=str[0];
   for(int i=0; i<k-1; i++){
      if(str[i]==' ' && str[i+1]!=' ') s+=str[i+1];
   }
   cout<<s<<"@ptit.edu.vn"<<endl;

   return (0);
}

// BAI THAM KHAO CACH 1:
/*
#include <bits/stdc++.h> 
using namespace std; 
int main() { 
   string s=""; 
   string s1; 
   getline(cin,s1); 
   for (long long i=s1.size()-1;i>=0;i--) 
      if ((s1[i]>=65) && (s1[i]<=90 )) s1[i] +=32; 
   long long k=0; 
   int kt=0; 
   for (long long i=s1.size()-1;i>=0;i--) { 
      if((s1[i] !=' ') && (s1[i-1] ==' ')) { 
         k=i; 
         break; 
      } 
      else if(i==0) kt=1;k=i; 
   } 
   for (long long i=k;i<s1.size();i++) s+=s1[i]; 
   if(kt==0) s+=s1[0]; 
   for (long long i=0;i<k-1;i++) { 
      if ((s1[i]==' ')&&(s1[i+1]!=' ')) s+=s1[i+1]; 
   } 
   s+="@ptit.edu.vn"; 
   cout<<s<<endl; 
   return 0; 
}

*/

// CACH 2:

/*
#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   string str; 
   getline(cin, str); 
   string final = ""; 
   stringstream ss; 
   ss<<str; 
   string tmp = "";
   vector<string> v; 
   while(ss>>tmp) { 
      v.push_back(tmp); 
   } 
   final += v[v.size()-1]; 
   for(int i=0; i<v.size()-1; i++) { 
      final += v[i].substr(0, 1); 
   } 
   transform(final.begin(), final.end(), final.begin(), ::tolower); 
   cout<<final<<"@ptit.edu.vn"<<endl; 
}

*/
