#include <iostream>
#define pi 3.1415926535897932384626

using namespace std;

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        int R,r,h,p;
        cin >> R >> r>> h>>p;

        double h1 =(double)(r*h)/(R-r);
        double h2 = p+h1;
        double Volume1 = (pi*r*r*h1)/3;
        double r2 = (r*h2)/h1;
        double Volume2 = (pi*r2*r2*h2)/3;

//        cout << "Case " <<++Case<< ": "<<Volume2-Volume1<<endl;
        printf("Case %d: %.6f\n",++Case,Volume2-Volume1);
    }
    return 0;
}