#include<bits/stdc++.h>
using namespace std;

void check(){
	string s; cin>>s;
	int a[10]={0}, dem=0, ok=0;
	for(int i=0; i<s.length(); i++){
		if(!isdigit(s[i]) || s[0]=='0'){
			cout<<"INVALID"<<endl;
			ok=1;
			break;
		}
		if(a[s[i]-'0']==0) dem++;
		a[s[i]-'0']=1;
	}
	if(ok==0){
		if(dem==10) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		check();
	}
	return 0;	
}
