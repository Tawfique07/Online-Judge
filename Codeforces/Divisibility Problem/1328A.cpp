#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--){
        unsigned int a, b;
        cin >> a >> b;
        int temp = a%b;
        if(temp){
            cout << b-temp<<endl;
        }
        else{
            cout << temp<<endl;
        }

    }

    return 0;
}