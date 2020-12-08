#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--){
        string name;
        cin >> name;
        int length = name.length();
        if(name[length-1] == 'o'){
            cout << "FILIPINO" <<endl;
        }
        else if(name[length-1] == 'a'){
            cout << "KOREAN" << endl;
        }
        else {
            cout << "JAPANESE" << endl;
        }
    }

    return 0;
}