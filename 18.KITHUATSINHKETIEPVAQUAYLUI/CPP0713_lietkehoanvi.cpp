#include<bits/stdc++.h>
using namespace std;

int n, a[100];

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++) a[i]=i+1;
		do{
			for(int i=0; i<n; i++) cout<<a[i];
			cout<<" ";
		}
		while(next_permutation(a,a+n));
		cout<<endl;
	}
	
}

/*

#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok=1;

void ktao(){
	for(int i=1; i<=n; i++) a[i]=i; 
}

void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]) --i;
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1, a+n+1);
	}	
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		ktao();
		while(ok){
			for(int i=1; i<=n; i++) cout<<a[i];
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
	
}

*/



/*

#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok=1;

void ktao(){
	for(int i=1; i<=n; i++) a[i]=i; 
}

void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]) --i;
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		int l=i+1, r=n;
		while(l<r){
			swap(a[l],a[r]);
			++l; --r;
		}
	}	
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		ktao();
		while(ok){
			for(int i=1; i<=n; i++) cout<<a[i];
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
	
}

*/



/*

#include<bits/stdc++.h>
using namespace std;

int n, a[100], used[100];

void in(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n) in();
			else Try(i+1);
			used[j]=0;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		memset(used,0,sizeof(used));
		Try(1);
		cout<<endl;
	}
}

*/
