#include <iostream>
#define cnst 10000007

int main() {
    int T, Case =0;
    std::cin >> T;
    while (T--){
        int a, b, c, d, e, f, n;
        std::cin >> a >> b >> c >> d >> e >> f >> n;
        int ans[n+6];
        ans[0] = a % cnst;
        ans[1] = b % cnst;
        ans[2] = c % cnst;
        ans[3] = d % cnst;
        ans[4] = e % cnst;
        ans[5] = f % cnst;
        if(n<=5){
            std::cout << "Case " << ++Case <<": " << ans[n] << std::endl;
        }else{
            for(int i=6; i<=n; i++){
                int sum=0;
                for(int j= i-6; j<i; j++){
                    sum+=ans[j];
                }
                ans[i] = sum % cnst;
            }
            std::cout << "Case " << ++Case <<": " << ans[n] << std::endl;
        }
    }
    return 0;
}