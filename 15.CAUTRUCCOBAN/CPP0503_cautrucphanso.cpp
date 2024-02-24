#include<iostream>
#include<algorithm>
using namespace std;

struct PhanSo{
    long long ts, ms;
 
};
   
void nhap(PhanSo &a){
    cin>>a.ts>>a.ms;
}
void in(PhanSo &a){
    cout<<a.ts<<'/'<<a.ms;
}
long long usc(long long a, long long b){
    return __gcd(a,b);
}
int rutgon(PhanSo &a){
    long long u = usc(a.ts,a.ms);
    a.ts /= u;
    a.ms /= u;
    return a.ts && a.ms;
}   

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
