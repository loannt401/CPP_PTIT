#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int k, n; cin>>k>>n;
        int a[k][n];
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        int s = k*n;
        int b[s], c=0;
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                b[c++] = a[i][j];
            }
        }
        sort(b, b + c);
        for(int i=0; i<c; i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}