#include <iostream> 
#include <cmath>
using namespace std; 
typedef unsigned long long int ull; 
void function(ull n) { 
	while(n%2==0) { 
		n/=2; 
		if(n==1){
            cout<<2;
            break;
        }
	} 
	for(ull i=3;i<=sqrt(n);i+=2) { 
		while(n%i==0){ 
			n/=i;  
		} 
        if(n==1){
            cout<<i;
            break;
        }
	} 
	if(n>1) cout << n; 
} 
int main() { 
	int t; 
	ull n; 
	cin>>t; 
	while(t--) { 
		cin>>n; 
		function(n); 
		cout<< endl; 
	} return 0; 
}