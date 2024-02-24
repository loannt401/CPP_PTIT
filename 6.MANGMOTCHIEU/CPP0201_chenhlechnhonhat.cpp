#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        std::sort(a,a+n);
        int min = abs(a[0]-a[1]);
        for(int i=1; i<n-1; i++){
            int t = abs(a[i]-a[i+1]);
            if(min>t){
                int doi = min;
                min=t;
                t=doi;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
