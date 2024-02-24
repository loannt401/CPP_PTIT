#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        std::sort(a,a+n);
        int d=0;
        for(int i=0; i<n-1; i++){
            int h=a[i]+1;
            if(h<a[i+1]){
                d++;
                h++;
            }
                h=0;
        }
        cout<<d<<endl;
    }
    return 0;
}