#include <iostream>
#include <cmath>
#include <cstdio>

#define Pi 3.141592653589793


using namespace std;
int main() {
    int T,Case=0;
    cin >> T;
    while (T--){
       double R,r,Angle;
        int n;
        cin >> R >> n;
        Angle = (360.0/n)/2.0;
        Angle = sin(Angle*Pi/180);


        r = (R*Angle)/(1+Angle);
//        cout << "Case " << ++Case <<": "<<r;
        printf("Case %d: %.10f\n",++Case,r);
    }

    return 0;
}