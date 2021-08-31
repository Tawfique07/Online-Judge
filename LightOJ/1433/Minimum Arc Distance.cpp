#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T, Case =0;
    cin >> T;
    while (T--){
        int Ax,Ay,Bx,By,Ox,Oy;
        cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;
        double AB = sqrt(pow(Ax-Bx,2)+pow(Ay-By,2));
        double OA = sqrt(pow(Ax-Ox,2)+pow(Ay-Oy,2));
        double Angle = 2* asin((AB/2)/OA);
//        cout << "Case " <<++Case<< ": "<<Angle*OA<<endl;
        printf("Case %d: %.5f\n",++Case,Angle*OA);
    }
    return 0;
}