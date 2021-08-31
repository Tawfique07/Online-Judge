#include <iostream>
#include <utility>


using namespace std;

int main() {
    int T,Case=0;
    cin >> T;
    while (T--){
        int n,m,d,y,z;
        char simulate;
        cin >> n >> m;
        int array[n];
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }
        while (m--){
            cin >> simulate;
            if(simulate=='S'){
                cin>>d;
                for(int i=0; i<n; i++){
                    array[i]+=d;
                }
            }
            if (simulate=='M'){
                cin>>d;
                for(int i=0; i<n; i++){
                    array[i]*=d;
                }
            }
            if (simulate=='D'){
                cin>>d;
                for(int i=0; i<n; i++){
                    array[i]/=d;
                }
            }
            if (simulate=='R'){

                for(int i=0; i<n/2; i++){
                    swap(array[i],array[(n-1)-i]);
                }
            }
            if(simulate=='P'){
                cin>>y>>z;
                swap(array[y],array[z]);
            }
        }
        cout <<"Case " << ++Case <<":"<<endl<<array[0];
        for (int j = 1; j < n; ++j) {
            cout<<" "<<array[j];
        }
        cout<<endl;

    }
    return 0;
}
