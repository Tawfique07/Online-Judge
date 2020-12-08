#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T, Case =0;
    cin >> T;
    while(T--){
        int r1,r2,c1,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        if(((r1+c1)&1)^((r2+c2)&1)){
            cout << "Case " << ++Case << ": impossible" <<endl;
        } else{
            if(sqrt(pow(r1-r2,2))==sqrt(pow(c1-c2,2))){
                cout << "Case " << ++Case << ": 1" <<endl;
            } else{
                cout << "Case " << ++Case << ": 2" <<endl;
            }
        }
    }
    return 0;
}