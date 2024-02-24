#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok, k;

void ktao(){
	for(int i=1; i<=k; i++) a[i]=i;
}

void sinh(){
	int i = k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		ok=1;
		ktao();
		while(ok){
			for(int i=1; i<=k; i++){
				cout<<a[i];
			}
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
	
}


/*

#include<bits/stdc++.h>
using namespace std;

int n, a[100], k;

void in(){
	for(int i=1; i<=k; i++){
		cout<<a[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}
}

*/
