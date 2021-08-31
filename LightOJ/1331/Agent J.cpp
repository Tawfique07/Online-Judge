#include <iostream>
#include <cmath>
#define pi 3.1415926535

using namespace std;

int main() {
    int T, Case =0;
    cin >> T;
    while (T--){
        double R1, R2, R3;
        cin >> R1 >> R2 >> R3;
        double A = R1+R2;
        double B = R2+R3;
        double C = R3+R1;
        double S = (A+B+C)/2;
        double area = sqrt(S*(S-A)*(S-B)*(S-C));
        double Angle1 = asin((2*area)/(A*C));
        double Angle2 = asin((2*area)/(A*B));
        double Angle3 = asin((2*area)/(B*C));
        double banana = ((R1*R1*Angle1)/2)+((R2*R2*Angle2)/2)+((R3*R3*Angle3)/2);
        printf("Case %d: %.6f\n",++Case,area-banana);

    }
    return 0;
}