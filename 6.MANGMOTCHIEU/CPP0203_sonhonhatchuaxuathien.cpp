#include<algorithm>
#include<iostream>
using namespace std;

int soam(int a[], int n){
    int max = 1;
    for(int i=0; i<n; i++){
        if(max < a[i]) return 0;
    }
    return 1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n]; 
        for(int i=0; i<n; i++) cin>>a[i];
        if(count(a,a+n,1)==0 || soam(a,n)==1 ) cout<<'1';
        else{
            sort(a,a+n);
            int ok=0;
            for(int i=1; i<n; i++){
                if(a[i-1]>0){
                    if(a[i]>a[i-1]+1){
                        cout<<a[i-1]+1;
                        ok=1;
                        break;
                    }
                }
            }
            if(ok==0) cout<<a[n-1]+1;
        }
        cout<<endl;
    }
    return 0;
}