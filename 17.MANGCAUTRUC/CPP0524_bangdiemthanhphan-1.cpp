#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ma, t, l;
	double d1,d2,d3;
};

void nhap(SinhVien &a){
	cin>>a.ma;
	cin.ignore();
	getline(cin,a.t);
	cin>>a.l>>a.d1>>a.d2>>a.d3;
}

void sap_xep(SinhVien a[], int n){
	auto cmp = [](const SinhVien &a, const SinhVien &b){ return a.ma < b.ma;};
	sort(a,a+n,cmp);
}
void in_ds(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		cout<<i+1<<" "<<a[i].ma<<" "<<a[i].t<<" "<<a[i].l<<" ";
		cout<<fixed<<setprecision(1)<<a[i].d1<<" "<<a[i].d2<<" "<<a[i].d3<<endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
