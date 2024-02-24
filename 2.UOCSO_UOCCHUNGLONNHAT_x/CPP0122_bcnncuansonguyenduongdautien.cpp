#include <iostream>

using namespace std;

long long uscln(long long a, long long b){
	if(b==0) return a;
	return uscln(b,a%b);
}
long long bc(long long a, long long b){
	return (a/uscln(a,b))*b;
} 
long long bcnn(int n){
	long long a=1;
	for(int i=2; i<=n; i++){
		a = bc(a,i);
	}
	return a;
}

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<bcnn(n)<<endl;
	}
}