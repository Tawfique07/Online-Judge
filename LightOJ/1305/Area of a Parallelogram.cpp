#include <iostream>
#include <cmath>

using  namespace std;

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
        cin >> Ax >> Ay >> Bx >> By>> Cx >> Cy;
        Dx = (Ax+Cx)-Bx;
        Dy = (Ay+Cy)-By;
        cout << "Case " << ++Case << ": " <<Dx <<" "<<Dy<< " " << (int)sqrt(pow(((Ax-Bx)*(By-Cy)-(Ay-By)*(Bx-Cx)),2)) <<endl;
    }
    return 0;
}