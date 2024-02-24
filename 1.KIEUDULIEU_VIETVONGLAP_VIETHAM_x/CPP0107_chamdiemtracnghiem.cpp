#include<bits/stdc++.h>
using namespace std;

/*
    cout << setprecision(n) << f in số thập phân f làm tròn đến n chữ số thập phân. Nhưng nếu f có ít hơn n chữ số phần thập phân, ví dụ như

f = 1.2
n = 3
thì khi cout << setprecision(n) << f sẽ chỉ in ra 1.2 mà không hiện đầy đủ 3 chữ số phần thập phân.

Do vậy, nếu muốn in f = 1.2 với chữ số thập phân thành f = 1.200 thì thêm fixed. “fixed” trong tiếng Anh có nghĩa là “cố định”. Ta phải cố định in ra n chữ số phần thập phân thì ta mới thấy kết quả như mong đợi.

f = 1.2
n = 3
cout << setprecision(n) << fixed << f;
sẽ ra 1.200.
         Cái std::setprecision(int) này phải dùng phối hợp với std::fixed (hay dùng), std::scientific, std::defaultfloat (mặc định :smiley: ) và std::hexfloat.

Năm hàm này đều là stream manipulator (bạn sẽ gặp dạng method của chúng, nó mới có tác dụng lâu dài), phải viết cùng với << như xuất dữ liệu và chỉ có tác dụng với output kế tiếp.
*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[15];
        for(int i=0; i<15; i++){
            cin>>s[i];
        }
        char a[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
        char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
        int d=0;
        if(n==101){
            for(int i=0; i<15; i++){
                if(a[i]!=s[i]) d+=1;
            }
        }
        if(n==102){
            for(int i=0; i<15; i++){
                if(b[i]!=s[i]) d+=1;
            }
        }
        cout << setprecision(2) << fixed << (10.00 - d*(10.00/15.00))<<endl;
    }
    return 0;
}