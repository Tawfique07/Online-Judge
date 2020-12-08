#include <iostream>

using namespace std;

int main() {

    int T, Case = 0;
    cin >> T;
    while(T--){
        bool check[300] = {false};
        int n;
        cin >> n;
        int num[n];
        for(int i=0; i<n; i++){
            cin >> num[i];
        }
        check[(0-num[0])+100]= true;
        for(int i=0; i<n; i++){
            int temp = (i-num[i])+100;
            if(!check[temp]){
                check[temp]=true;
            }
            else{
                for(int j=0; j<n && j!=i; j++){
                    temp = (i-num[j])+100;
                    int temp2 = (j-num[i])+100;
                    if(!check[temp] && !check[temp2]){
                        check[temp] = true;
                        check[temp2] = true;
                        check[(j-num[j])+100] = false;
                        temp = num[i];
                        num[i] = num[j];
                        num[j] = temp;
                        break;
                    }
                }
            }

        }
        for(int x:num ){
            cout << x << " ";
        }
        cout<<endl;
    }

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}