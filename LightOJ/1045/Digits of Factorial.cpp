#include <iostream>
#include <cmath>

using  namespace std;

double logarithm[1000001];

void generate();

int main() {
    generate();
    int T;
    cin >> T;
    for(int i=1; i<=T; i++){
        int number, base;
        cin >> number >> base;
        int digit = (int)(logarithm[number]/log(base))+1;
        cout << "Case " << i << ": " << digit << endl;
    }
    return 0;
}

void generate(){
    logarithm[0] = log(1);
    logarithm[1] = log(1);
    for(int i=2; i<=1000000; i++){
        logarithm[i] = logarithm[i-1] + log(i);
    }
}