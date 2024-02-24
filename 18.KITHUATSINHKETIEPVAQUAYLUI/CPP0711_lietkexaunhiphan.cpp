#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok;

void ktao(){
	for(int i=1; i<=n; i++) a[i]=0;
}

void sinh(){
	int i=n;
	while(i>=1 && a[i]==1) --i;
	if(i==0) ok=0;
	else{
		a[i]=1;
		for(int j=i+1; j<=n; j++) a[j]=0;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n; ok=1;
		ktao();
		while(ok){
			for(int i=1; i<=n; i++) cout<<a[i];
			cout<<" ";
			sinh();
		}	
		cout<<endl;
	}
	
}


/*

#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void in(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}
}

*/
