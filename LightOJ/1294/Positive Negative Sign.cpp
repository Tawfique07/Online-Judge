#include <iostream>
#define ll long long

using namespace std;

int main() {
    int T, Case = 0;
    cin >> T;
    while (T--){
        ll n, m,ans;
        cin >> n >> m;
        ans = (n/2)*m;
        cout << "Case " << ++Case << ": " << ans <<endl;
    }
    return 0;
}