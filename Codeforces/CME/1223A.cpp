#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--){
        unsigned int n;
        cin >> n;
        if(4 <= n){
            if(n%2){
                cout << "1" << endl;
            }
            else{
                cout << "0" << endl;
            }
        }
        else {
            cout << 4-n << endl;
        }
    }

    return 0;
}