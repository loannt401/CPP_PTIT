#include<bits/stdc++.h>
using namespace std;

void doichocs(){
	string s; cin>>s;
	int a[26]={0};
	int max_kt=0;
	for(int i=0; i<s.length(); i++){
		a[s[i]-'a']++;
		max_kt = max(max_kt, a[s[i]-'a']);
	}
	if((s.length() - max_kt) >= (max_kt - 1)) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	}

int main(){
	int t; cin>>t;
	while(t--){
		doichocs();
	}
	return 0;	
}