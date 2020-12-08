#include <iostream>
using  namespace std;
int main() {
    int n, p, k;
    bool mark= true;
    cin >> n >> p >> k;
    int temp = p-k;
    if(temp<=1){
        mark = false;
        temp = 1;
    }

    if(mark){
        cout << "<< ";
    }

    for(int i=temp; i<=n; i++){

        if(i==p){
            cout << "(" << i << ") ";
        }
        else if(i>(p+k)){
            cout << ">>";
            break;
        }
        else{
            cout << i <<" ";
        }
    }
    return 0;
}