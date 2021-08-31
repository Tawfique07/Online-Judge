#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        ll s, row, col;
        cin >> s;
        ll ans = sqrt(s);
        while (ans*ans < s){
            ans++;
        }
        ll start = ans*ans;
        ll position = (start - s)+1;
        if(start%2 == 0){
            if(ans < position){
                col = ans;
                row = ans - (position-ans);
            }
            else{
                row = ans;
                col = ans - (ans - position);
            }
        }
        else{
            if(ans < position){
                row = ans;
                col = ans - (position-ans);
            }
            else{
                col = ans;
                row = ans - (ans-position);
            }
        }
        cout << "Case " << ++Case << ": " << row << " " << col << endl;
    }

    return 0;
}