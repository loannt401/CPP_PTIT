#include<iostream>
#include<algorithm>
using namespace std;

/*
    Cho mảng các số nhị phân A1[] và A2[] gồm n 0, 1. 
    Hãy tìm khoảng chung dài nhất thỏa mãn: j ≥i 
    => j là chỉ số cuối của mảng
    và span(i, j) = A1[i] + A1[i+1] + …+A1[j] 
                    = A2[i] + A2[i+1] + …+A2[j]. 
    Ví dụ với A1[] = {0, 1, 0, 0, 0, 0}, 
                A2[] = {1, 0, 1, 0, 0, 1} 
    ta có kết quả là 4 tương ứng với 
    A1[1]+ A1[2]+ A1[3]+ A1[4] 
    = A2[1]+ A2[2]+ A2[3]+ A2[4] 
    = 1.

*/

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool a[n], b[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        int khoang_max=0, kc = 0;
        for(int i=0; i<n; i++){
            int sum1=0, sum2=0;
            for(int j=i; j<n; j++){
                sum1+=a[j]; sum2+=b[j];
                if(sum1==sum2) kc = j-i+1; 
            }
            khoang_max = max(khoang_max, kc);
        }
        cout<<khoang_max<<endl;
    }
}