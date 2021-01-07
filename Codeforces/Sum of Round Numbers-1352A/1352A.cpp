#include <iostream>
#include <stack>

using namespace std;

int main() {

    int T;
    cin >> T;
    while(T--){
        int i = 1, num,j=10,temp;
        stack <int > s;
        cin >> num;
        while(num){
            temp = num % j;
            num = num / j;
            if(temp) {
                s.push(temp * i);
            }
            i = i*j;
        }
        cout << s.size() <<endl;
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
    return 0;
}