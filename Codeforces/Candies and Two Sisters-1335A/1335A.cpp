#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, a, b;
        cin >> n;
        b = n/2;
        a = n - b;
        if(a==b){
            cout << b -1 << endl;
        }
        else {
            cout << b << endl;
        }
    }
    return 0;
}