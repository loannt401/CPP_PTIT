#include <iostream>

using namespace std;

int uscln(long a, long b){
    if(b==0) return a;
    return uscln(b, a%b);
}

int bscnn(long a, long b){
    return (a/uscln(a,b))*b;
}

int main(){
	int t;
	do cin>>t;
	while(t>100 && t<1);
	while(t--){
		long a,b;
		cin>>a>>b;
		cout << bscnn(a,b) << " " << uscln(a,b) << endl;
	}
    return 0;
}