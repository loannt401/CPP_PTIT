#include<iostream>
using namespace std; 

int main(){
    int t; cin>>t;
    while(t--){
        int n,k,h; cin>>n>>k>>h;
        long long a[n],b[k],c[h];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<k; i++){
            cin>>b[i];
        }
        for(int i=0; i<h; i++){
            cin>>c[i];
        }
        int t=min(n,k);
        long long hop[t];
        int i=0, j=0, l=0;
        while(i<n && j<k){
            if(a[i]==b[j]){ 
                hop[l]=a[i];
                i++; j++;l++;
            }
            else if(a[i]>b[j]) j++;
            else i++;
        }
        int i1=0, i2=0;
        while(i1<h && i2<l){
            if(c[i1]==hop[i2]){
                cout<<c[i1]<<" ";
                i1++; i2++;
            }
            else if(c[i1]>hop[i2]) i2++;
            else i1++; 
        }
        cout<<endl;
    }
    return 0;
}

