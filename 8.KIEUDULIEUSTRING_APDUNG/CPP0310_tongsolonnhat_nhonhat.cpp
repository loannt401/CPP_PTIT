#include<bits/stdc++.h>
using namespace std;

void check(){
	string x1,x2; cin>>x1>>x2;
	for(int i=0; i<x1.length(); i++){
		if(x1[i]=='6') x1[i]='5';
	}
	for(int i=0; i<x2.length(); i++){
		if(x2[i]=='6') x2[i]='5';
	}
	cout<<stoll(x1)+stoll(x2)<<" ";
	for(int i=0; i<x1.length(); i++){
		if(x1[i]=='5') x1[i]='6';
	}
	for(int i=0; i<x2.length(); i++){
		if(x2[i]=='5') x2[i]='6';
	}
	cout<<stoll(x1)+stoll(x2)<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		check();
	}
	return 0;	
}
