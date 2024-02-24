#include<bits/stdc++.h>
using namespace std;

void check(){
	string s; cin>>s;
	int a[26]={0};
	int sum=0;
	for(int i=0; i<s.length(); i++){
		if(isdigit(s[i])) sum+= s[i]-'0';
		else a[s[i]-'A']++;
		
	}
	for(char i='A'; i<='Z'; i++){
		while(a[i-'A']>0){
			cout<<i;
			a[i-'A']--;
		}
	}
	cout<<sum<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		check();
	}
	return 0;	
}
