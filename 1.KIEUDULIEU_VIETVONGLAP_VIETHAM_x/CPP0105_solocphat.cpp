#include<iostream>

using namespace std;

/*
    Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8.
*/
bool solocphat(int n)
{
    int x = n%10;
    if(x!=0 && x!=6 && x!=8) return false; n/=10;
    return true; 
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(solocphat(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}