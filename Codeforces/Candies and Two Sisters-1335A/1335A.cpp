#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--){
        int n,ans;
        cin >> n;
        if(n<3){
            cout<< 0 << endl;
        }
        else {
            ans = n / 2;
            if (ans % 2) {
                cout << ans << endl;
            } else {
                cout << ans - 1 << endl;
            }
        }
    }
    return 0;
}