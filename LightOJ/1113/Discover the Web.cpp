#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int T, Case = 0;
    char str[60];

    cin>>T;
    while (T--){
        int size = 1,position=0;
        strcpy(str,"http://www.lightoj.com/");
        vector<string> vec;
        vec.push_back(str);
        cout << "Case " << ++Case <<":" <<endl;
        while (strcmp(str,"QUIT") != 0){
            scanf("%s",str);
            if(strcmp(str,"VISIT")==0){
                cin>>str;
                if(size-position!=1){
                    vec.erase(vec.begin()+(++position),vec.end());
                    vec.push_back(str);
                    cout << vec[position]<<endl;
                    size = vec.size();
                    continue;
                }

                size++;
                vec.push_back(str);
                cout << vec[++position]<<endl;
            }
            if(strcmp(str,"FORWARD")==0){
                if(size-position==1){
                    cout <<"Ignored"<<endl;
                    continue;
                }
                cout<<vec[++position]<<endl;
            }
            if(strcmp(str,"BACK")==0){
                if(position==0){
                    cout <<"Ignored"<<endl;
                    continue;
                }
                cout<<vec[--position] << endl;
            }
        }
    }
    return 0;
}