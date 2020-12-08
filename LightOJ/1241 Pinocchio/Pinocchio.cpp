#include <iostream>

using namespace std;

int main() {
    int T, Case =0;
    cin >> T;
    while (T--){
        int n, a, temp = 2, count =0 ;
        cin >> n;
        while (n--){
            cin >> a;
            if(a>temp){
                int lie = a-temp;
                count += lie/5;
                if(lie%5 !=0){
                    count++;
                }
            }
            temp = a;
        }
        cout << "Case " << ++Case << ": " << count << endl;
    }
    return 0;
}