#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int T, Case = 0;
    cin >> T;
    while(T--){

        int n;
        cin >> n;
        int num[n];
        for(int i=0; i<n; i++){
            cin >> num[i];
        }

        sort(num, num + n, greater<int>());

        for(int x:num ){
            cout << x << " ";
        }
        cout<<endl;
    }

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}