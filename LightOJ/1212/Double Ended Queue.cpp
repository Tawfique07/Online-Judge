#include <iostream>
#include <cstring>

using namespace std;

int array[300];

int main() {
    int T,Case = 0;
    cin >> T;
    while(T--){
        cout << "Case " <<++Case << ":" <<endl;
        int n,m,left=150,right=150,size=0;
        char str[20];
        cin >> n >> m;
        while (m--){
            scanf("%s",str);
            if(strcmp(str,"pushLeft")==0){
                cin >> array[left];
                if(size==n){
                    cout << "The queue is full" << endl;
                    continue;
                }

                cout << "Pushed in left: " << array[left] <<endl;
                if(left==right){
                    right++;
                    left--;
                }
                else{
                    left--;
                }
                size++;
            }
            else if(strcmp(str,"pushRight")==0){
                cin >> array[right];
                if(size==n){
                    cout << "The queue is full" << endl;
                    continue;
                }
                cout << "Pushed in right: " << array[right] <<endl;
                if(left==right){
                    right++;
                    left--;
                }
                else{
                    right++;
                }
                size++;
            }
            else if(strcmp(str,"popRight")==0){
                if(size==0){
                    cout << "The queue is empty" << endl;
                    continue;
                }
                right--;
                size--;
                cout << "Popped from right: " <<array[right]<<endl;
            }
            else {
                if(size==0){
                    cout << "The queue is empty" << endl;
                    continue;
                }
                left++;
                size--;
                cout << "Popped from left: " <<array[left]<<endl;
            }
        }
    }
    return 0;
}