#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string masv = "B20DCCN001";
    string hoten;
    string lop;
    string ngaysinh;
    float diem;
};
void nhap(SinhVien &a){
    getline(cin,a.hoten);
    cin>>a.lop;
	cin>>a.ngaysinh;
	cin>>a.diem;
	if(a.ngaysinh[1]=='/') a.ngaysinh = "0"+a.ngaysinh;
	if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
}
void in(SinhVien &a){
    cout<<a.masv<<" "<<a.hoten<<" "<<a.lop<<" "<<a.ngaysinh<<" ";
    cout<<fixed<<setprecision(2)<<a.diem;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}