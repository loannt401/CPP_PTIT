#include<bits/stdc++.h>
using namespace std;
struct thoigian{
	int h, p, s;
};
void nhap(thoigian &a){
	cin>>a.h>>a.p>>a.s;
}
void sapxep(thoigian a[], int n){
	auto cmp = [](const thoigian &a, const thoigian &b){ 
		if(a.h!=b.h) return a.h<b.h;
		else if(a.p!=b.p) return a.p<b.p;
		return a.s<b.s;
	};
	sort(a, a+n, cmp);
}
void in(thoigian a[], int n){
	for(int i=0; i<n; i++) cout<<a[i].h<<" "<<a[i].p<<" "<<a[i].s<<endl;
}
int main(){
	int n; cin>>n;
	thoigian a[n];
	for(int i=0; i<n; i++) nhap(a[i]);
	sapxep(a,n);
	in(a,n);
}
