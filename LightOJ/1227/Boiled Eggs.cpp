#include <iostream>

using namespace std;

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        int n, p, q, temp , gm =0 ,ans = 0;
        cin >> n >> p >> q;
        for(int i=0; i<n; i++){
            cin >> temp;
            gm+=temp;
            if(ans != n && ans != p && gm <= q){
                ans++;
            }
        }
        cout << "Case " << ++Case << ": " <<ans<<endl;
    }
    return 0;
}