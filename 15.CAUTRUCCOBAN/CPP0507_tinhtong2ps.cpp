#include<bits/stdc++.h>
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
    return a.ts&&a.ms;
}  
 PhanSo tong(PhanSo f1, PhanSo f2) 
    { 
     PhanSo ketqua={(f1.ts * f2.ms) + (f2.ts * f1.ms), f1.ms * f2.ms};
     rutgon(ketqua); 
     return ketqua; 
  
   } 

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}