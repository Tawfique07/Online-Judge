#include <iostream>
#define  ll long long

using namespace std;
ll summ(int i){
    ll sum=0, temp;
    while(i--)
    {
        cin >> temp;
        sum+=temp;
    }
    return sum;
}

int main() {
    int n;
    ll temp, sum[3];
    cin >> n;
    for(int i=0; i<3; i++){
       sum[i]=summ(n-i);
    }
    cout << sum[0]-sum[1] << endl << sum[1]-sum[2];
    return 0;
}