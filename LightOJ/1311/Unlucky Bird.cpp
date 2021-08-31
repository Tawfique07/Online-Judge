#include <iostream>

using namespace std;

int main() {
    double v1, v2, v3, a1, a2;
    int T; cin >> T;
    for(int i=1;i<=T ; i++ ){
        cin >> v1>> v2>> v3>> a1>> a2;
        double s1 = (v1*v1)/(2*a1);
        double s2 = (v2*v2)/(2*a2);
        double t1 = v1/a1;
        double t2 = v2/a2;
        double max_t = t1>t2 ? t1:t2;
        double bird = v3*max_t;
        printf("Case %d: %.8f %.8f\n",i,s1+s2,bird);
    }
    return 0;
}