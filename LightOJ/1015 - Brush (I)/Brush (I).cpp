#include <iostream>

using namespace std;

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        int N, ans= 0, temp;
        cin >> N;
        while(N--){
            cin >> temp;
            if(temp>0){
                ans+=temp;
            }
        }
        cout << "Case " << ++Case << ": " << ans << endl;
    }
    return 0;
}