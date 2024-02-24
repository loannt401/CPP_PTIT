#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string ma, ht,gt, ns, dc, mst, nk;
};

void nhap(NhanVien &a){
	cin.ignore();
	getline(cin,a.ht);
    cin>>a.gt>>a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin>>a.mst>>a.nk;
}

void inds(NhanVien a[], int n){
    for(int i=0; i<n; i++){
        string s = to_string(i+1);
        s = string(5-s.size(),'0')+s;
        cout<<s<<" "<<a[i].ht<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].mst<<" "<<a[i].nk<<endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
