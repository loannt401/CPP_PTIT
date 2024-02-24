#include<iostream>
#include<algorithm>
using namespace std;

/*
    sort(a, a+n);
        sắp xếp mảng a tăng dần từ phần tử 0 đến phần tử n-1
    sort(a+1, a+1+n);
        sắp xếp mảng a tăng dần từ phần tử 1 đến phần tử n
    sort(a, a+n, greater<int>());
        sắp xếp mảng a giảm dần từ p.tử 0 đến p.tử n-1
*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[k-1]<<endl;
    }
    return 0;
}