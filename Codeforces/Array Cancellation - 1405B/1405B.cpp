#include <iostream>
#define ll long long

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int size;
        ll neg = 0, pos = 0, num;
        cin >> size;
        while(size--){
            cin >> num;
            if(num < 0){
                if(abs(num)>pos){
                    num += pos;
                    neg += num;
                    pos = 0;
                }
                else{
                    pos += num;
                }

            }
            else{
                pos += num;
            }
        }

        cout << pos << endl;
    }
    return 0;
}