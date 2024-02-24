#include<iostream>
#include<algorithm>
using namespace std;

/*
    tìm tổng lớn nhất của các sô 
    bắt đầu tại phần tử đầu tiên của một mảng 
    kết thúc ở phần tử cuối cùng của một trong hai mảng
    vd: a1 = { 2,3,7,10,12}  a2 = { 1,5,7,8}  
    nếu t bắt đầu từ mảng a1
    t duyệt từ a1[0] + tổng mảng a2 từ chỉ số tiếp theo là a2[1]+a2[2]+...
    rồi duyệt tiếp
        a1[0]+a1[1]+ a2[2]+a2[3]+...
    duyệt hết mảng a1 ta quay lại mảng a2
*/

void nhapmang(int a[], int n){
    for(int i=0; i<n; i++) cin>>a[i];
}

int  tonglonnhat(int a[], int b[], int n, int m){
    int tong1 = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        tong1 += a[i];
        int tong2=0;
        for(int j=i+1; j<m; j++) tong2 += b[j];
        sum = max(sum,tong1+tong2);
    }
    return sum;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a1[n], a2[m];
        nhapmang(a1,n);
        nhapmang(a2,m);
        cout<<max(tonglonnhat(a1,a2,n,m),tonglonnhat(a2,a1,m,n))<<endl;
    }
    return 0;
}






