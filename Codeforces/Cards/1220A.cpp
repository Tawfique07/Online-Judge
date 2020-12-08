#include <iostream>
#include <cstring>

int main() {
    int n,count_n = 0, count_z = 0;
    std::cin >> n;
    char str[n];
    scanf("%s",str);
    for(int i=0; i<n; i++){
        if(str[i]=='n'){
            count_n++;
        }
        else if(str[i]=='z'){
            count_z++;
        }
    }
    while(count_n--){
        std::cout<<1<<" ";
    }
    while(count_z--){
        std::cout << 0 <<" ";
    }
    return 0;
}