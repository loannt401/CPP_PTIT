#include<bits/stdc++.h>
using namespace std;

bool check1(string a){
	for(int i=0; i<4; i++){
		if(a[i]>=a[i+1]) return 0;
	}
	return 1;
}

bool check2(string a){
	for(int i=0; i<4; i++){
		if(a[i]!=a[i+1]) return 0;
	}
	return 1;
}

bool check3(string a){
	if(a[0]==a[1]&&a[0]==a[2]&& a[3]==a[4]) return 1;
	return 0;
}

bool check4(string a){
	for(int i=0; i<5; i++){
		if(a[i]!='6' && a[i]!='8') return 0;
	}
	return 1;
}

void check(){
	string s; cin>>s;
	string tmp = s.substr(5,6);
	tmp.erase(3,1);
	if(check1(tmp) || check2(tmp) || check3(tmp) || check4(tmp)){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		check();
	}
	return 0;	
}
