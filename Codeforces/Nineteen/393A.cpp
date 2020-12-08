#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count[4]={0};
    for(int i=0; str[i]; i++){
        if(str[i]=='n'){
            count[0]++;
        }
        else if(str[i]=='e'){
            count[1]++;
        }
        else if(str[i]=='i')
        {
            count[2]++;
        }
        else if(str[i]=='t'){
            count[3]++;
        }
    }
    if(count[0] & 1)
    {
        count[0] /=2;
    }
    else{
        count[0]--;
        count[0] /=2;
    }
    count[1] /= 3;
    sort(count,count+4);

    cout << count[0] <<endl;
    return 0;
}