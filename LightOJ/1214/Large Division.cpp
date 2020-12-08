#include <iostream>
#include <string>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        string number;
        ll divisor;
        ll reminder = 0;
        cin >> number >> divisor;
        divisor = abs(divisor);
        if(number[0]=='-'){
            number.erase(0,1);
        }
        if(number[0]!='0'){
            for(int i=0; number[i]; i++){
                if(divisor<=reminder){
                    reminder %=divisor;
                }

                if(reminder!=0){
                    reminder *=10;
                }
                reminder+=(int)number[i]-'0';

            }
        }
        if(divisor<=reminder){
            reminder %=divisor;
        }
        if(reminder){
            cout << "Case " << ++Case << ": not divisible\n";
        }
        else
            cout << "Case " << ++Case << ": divisible\n";
    }
    return 0;
}
