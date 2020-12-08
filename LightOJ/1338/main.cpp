#include <bits/stdc++.h>

using namespace std;


int main() {
    int T, Case =0;
    cin >> T;
    while (T--){
        char string1[110],string2[110];

        scanf("\n");
        scanf("%[^\n]s",string1);
        scanf("\n");
        scanf("%[^\n]s",string2);

        string str (string1);
        string str1 (string2);

        transform(str.begin(),str.end(),str.begin(), ::tolower);
        transform(str1.begin(),str1.end(),str1.begin(), ::tolower);

        sort(str.begin(),str.end());
        sort(str1.begin(),str1.end());

        int length = str.length();
        int length2 = str1.length();
        if(length > length2){
            str.erase(0,length-length2);
        }
        else{
            str1.erase(0,length2-length);
        }

        if(str == str1){
            cout << "Case " << ++Case << ": Yes\n";
        }
        else{
            cout << "Case " << ++Case << ": No\n";
        }

    }

    return 0;
}