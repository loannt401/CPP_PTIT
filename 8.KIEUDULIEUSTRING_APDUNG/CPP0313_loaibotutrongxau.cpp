#include<iostream>
#include<string>
using namespace std;

int main(){
   string str;
   string x;
   getline(cin,str);
   getline(cin,x);
   size_t pos;
   int len = x.length();
   do{
      pos = str.find(x);
      if(pos == -1) break;
      str.erase(pos,len);
   }
   while(1);
   cout<<str;
}