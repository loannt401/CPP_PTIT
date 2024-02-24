#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n]; 
        for(int i=0; i<n; i++) cin>>a[i];
        int k,h; cin>>k>>h;
        int ok=0;
        for(int i=k+1; i<h; i++){
            if(a[i]<a[i+1] && a[i]<a[i-1]){
                ok=1; break;
            }   

        }
        if(ok==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}



/*
CACH DUNG NHI PHAN:

#include<bits/stdc++.h> 
using namespace std; 
void Solution(int a[], int m, int first, int last){ 
    int b[1005], k = 0; 
    for(int i = first;i < last;i++){ 
        if(a[i] <= a[i + 1]) { 
            b[k] = 1; k++;
        } 
        else { 
            b[k] = 0; k++; 
        } 
    } 
    if(b[0] == 1) { 
        for(int i = 0;i < k;i++){ 
            if(b[i] == 0){ 
                for(int j = i + 1;j < k;j++){ 
                    if(b[j] == 1) { 
                        cout<<"No"<<endl; 
                        return;
                    } 
                } 
            } 
        } 
        cout<<"Yes"<<endl; 
        return; 
    } 
    else { 
        for(int i = 0;i < k;i++){ 
            if(b[i] == 1) { 
                cout<<"No"<<endl; 
                return; 
            } 
        } 
        cout<<"Yes"<<endl; 
        return; 
    } 
    return; 
} 
int main(){ 
    int n; cin>>n; 
    while(n--){ 
        int m, a[1005], i; 
        cin>>m; 
        for(i = 0;i < m;i++) cin>>a[i]; 
        int first, last; 
        cin>>first>>last; 
        Solution(a,m,first,last); 
    } 
    return 0; 
}
*/