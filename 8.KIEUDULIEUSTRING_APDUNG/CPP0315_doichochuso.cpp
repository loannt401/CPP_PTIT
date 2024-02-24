#include<bits/stdc++.h>
using namespace std;

void doichocs(){
	string s; cin>>s;
	int i = s.length()-2;
	while(i>=0 && s[i]<=s[i+1]) --i;
	if(i==-1) cout<<"-1"<<endl;
	else{
		int j=s.length()-1;
		while(s[i]<=s[j] || (s[j]==s[j-1] && s[j]<s[i]) ){
			--j;
		}
		swap(s[i],s[j]);
		cout<<s<<endl;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		doichocs();
	}
	return 0;	
}