#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
   Ý TƯỞNG:
      ta thấy nếu x thỏa mãn pt: x^2 = 1 (mod p) thì x + i*p cũng thỏa mãn pt
      ta duyệt 1 đến p để tìm mọi x thỏa mãn 
      từ x ta tìm được số cuối lớn nhất: x + p*(n/p)
         vd: b =8; p=6; 
            vs x=1 thì ta tìm được số cuối = 7
            vs x=5 => số cuối 5 
      từ số cuối ta tìm được số đồng dư: (cuoi - x)/p + 1
      rồi cộng vào kết quả


   VÍ DỤ:
      Đầu vào: n = 10, p = 5
      Đầu ra: 4
      Có bốn số nguyên thỏa mãn phương trình
      x 2 = 1. Các số là 1, 4, 6 và 9.

      Đầu vào: n = 15, p = 7
      Đầu ra: 5
      Có năm số nguyên thỏa mãn phương trình
      x^2 = 1. Các số là 1, 8, 15, 6 và 13.
      
*/

int sodongdu(ll n, ll p){
   int dem=0;
   for(ll i=0; i<p; i++){
      if((i*i)%p==1){
         ll cuoi = i + p*(n/p);
         if(cuoi > n) cuoi -= p;
         dem += (cuoi-i)/p + 1;
      }
   }
   return dem;
}

int main(){
   int t; cin>>t;
   while (t--)
   {
      ll b,p; cin>>b>>p;
      cout<<sodongdu(b,p)<<endl;
   }
   return 0;
}