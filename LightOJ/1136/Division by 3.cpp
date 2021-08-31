#include <iostream>

using namespace std;

int divisor(int a, int b);

int main() {
    int T;
    cin >> T;
    for(int i=1; i<=T; i++){
        int left, right;
        cin >> left >> right;
        cout << "Case " << i << ": " << divisor(left,right) <<endl;
    }
    return 0;
}

int divisor(int a, int b){
    int left = (a/3)*2;
    int right = (b/3)*2;

    if(b%3==2){
        right+=1;
    }

    if(a%3){
        return (right-left);
    }
    else{
        return (right-left)+1;
    }
}