#include <iostream>
#include <vector>
#define ll long long

using namespace std;

ll factorial[21];


void generate(){
    factorial[0]=1;
    for(int i=1; i<21; i++){
        factorial[i]=factorial[i-1]*i;
    }
}

int main() {
    generate();
    int T;
    cin >> T;
    for(int i=1; i<=T; i++){
        bool mark = true;
        bool check[20] = {false};
        ll num; cin >> num;
        for(int j=0; j<21; j++){
            if(factorial[j]>num){
                if(check[j-1]){
                    mark= false;
                    break;
                }
                check[j-1]=true;
                num-=factorial[j-1];
                j=0;
            }
            if(num==2){
                check[0]=true;
                check[1]= true;
                break;
            }
            if(num==0)
                break;
        }
        cout << "Case "<< i <<": ";

        if(mark){
            for(int j=0,k=0; j<20 ;j++){
                if(check[j]){
                    if(k==0){
                        cout << j <<"!"; k++;
                    }
                    else
                        cout <<"+"<< j <<"!";
                }
            }
            cout<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}