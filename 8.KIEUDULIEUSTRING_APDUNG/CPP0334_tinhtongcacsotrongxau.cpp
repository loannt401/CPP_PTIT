#include<bits/stdc++.h>
using namespace std;

void check(){
	string s; cin>>s;
	int sum=0, ans=0;
	for(int i=0; i<s.length(); i++){
		if(isdigit(s[i])){
			sum=sum*10+(s[i]-'0');
		}
		else{
			ans +=sum;
			sum=0;
		}
	}
	ans+=sum;
	cout<<ans<<endl;

}

int main(){
	int t; cin>>t;
	while(t--){
		check();
	}
	return 0;	
}
