#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string mnv = "00001";
    string ht, gt, ns, dc, mst, nkhd;
};
void nhap(NhanVien &a){
    getline(cin,a.ht);
    cin>>a.gt>>a.ns;
    cin.ignore();
	getline(cin,a.dc);
	cin>>a.mst>>a.nkhd;
}
void in(NhanVien &a){
    cout<<a.mnv<<" "<<a.ht<<" "<<a.gt<<" "<<a.ns<<" ";
    cout<<a.dc<<" "<<a.mst<<" "<<a.nkhd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
