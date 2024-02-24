#include<bits/stdc++.h>
using namespace std;

void check(){
	string s;
	int k; cin>>s>>k;
	int dem=0;
	for(int i=0; i<s.length(); i++){
		int a[256];
		memset(a,0,sizeof(a));
		int cnt=0;
		for(int j=i; j<s.length(); j++){
			if(a[s[j]]==0) cnt++;
			if(cnt == k) dem++;
			else if(cnt > k){
				break;
			}
			a[s[j]]=1; 
		}
	}
	cout<<dem<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		check();
	}
	return 0;	
}
