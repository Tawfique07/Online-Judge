#include <iostream>
#include <cstring>
#include <utility>

using namespace std;

int main() {
    char str1[50],str2[50];
    int T,Case = 0;
    cin >> T;
    while (T--){
        cin >> str1;
        strcpy(str2,str1);
        int length = strlen(str1);
        for(int i=0; i<length/2;i++){
            swap(str1[i],str1[(length-1)-i]);
        }
        if(strcmp(str1,str2)==0){
            cout << "Case " << ++Case << ": Yes" <<endl;
        }
        else
            cout << "Case " << ++Case << ": No" <<endl;
    }
    return 0;
}