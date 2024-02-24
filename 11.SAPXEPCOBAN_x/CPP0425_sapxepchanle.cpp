#include<bits/stdc++.h>
using namespace std;

// sắp xếp lại các phần tử của mảng sao cho
//     a[i-1]<=a[i]  nếu i chẵn
//     a[i-1]>=a[i]  nếu i lẻ

// sắp xếp dãy xong 
// chia đôi ra nếu 
//     n chẵn thì chia hai dãy bằng nhau 
//     nếu n lẻ thì chia dãy bé lẽ lớn hơn 1 phần tử 
// xong từ đó xếp xen kẽ vào

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        int c[(n/2)+1], d[(n/2)+1];
        int h=0, l=0;
        if(n%2==0){
            for(int i=0; i<n/2; i++){
                c[h]=a[i];
                h++;
            }
        }
        else {
            for(int i=0; i<=n/2; i++){
                c[h]=a[i];
                h++;
            }
        }
        for(int i=n/2; i<n; i++){
            d[l]=a[i]; l++;
        } 
        if(n%2==0){
            int i=0, j=0;
            while(i<h && j<l){
                cout<<c[i]<<" ";
                cout<<d[j]<<" ";
                i++; j++;
            }
        }
        else {
           int i=0, j=1;
            while(i<h && j<l){
                cout<<c[i]<<" ";
                cout<<d[j]<<" ";
                i++; j++;
            } 
            cout<<c[h-1];
        }
        cout<<endl;
    }
}