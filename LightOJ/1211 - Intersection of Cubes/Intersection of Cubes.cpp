#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T, Case =0;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        int x1[n], y1[n], z1[n], x2[n], y2[n], z2[n];
        for(int i=0; i<n; i++){
            cin >> x1[i] >> y1[i] >> z1[i] >> x2[i] >> y2[i] >> z2[i];
        }
        sort(x1,x1+n);
        sort(y1,y1+n);
        sort(z1,z1+n);
        sort(x2,x2+n);
        sort(y2,y2+n);
        sort(z2,z2+n);
        int x = (x2[0]-x1[n-1]);
        int y = (y2[0]-y1[n-1]);
        int z = (z2[0]-z1[n-1]);

        if(x < 0 || y < 0 || z< 0){
            cout << "Case " << ++Case <<": 0" << endl;
        } else{
            cout << "Case " << ++Case <<": " << x*y*z << endl;
        }

    }
    return 0;
}