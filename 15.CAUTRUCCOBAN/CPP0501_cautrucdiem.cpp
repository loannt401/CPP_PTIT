#include<bits/stdc++.h>
#include<cmath>
using namespace std;

struct Point{

     double x, y;

};

void input( Point &a){
    cin>>a.x>>a.y;
}

double distance(Point &a, Point &b){
    double s1 = abs(a.x - b.x);
    double s2 = abs(a.y - b.y);
    return sqrt( pow(s1,2) + pow(s2,2) );
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
