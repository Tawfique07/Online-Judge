#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int size,temp, back, front, last;
        bool isPossible = true;
        vector<int> arr;
        vector<int> ans;

        cin>>size;
        for(int i=0; i<size; i++){
            cin>>temp;
            arr.push_back(temp);
        }

        if(size%2){
            isPossible = false;
        }
        else {

            sort(arr.begin(),arr.end());

            int i=0, j=size/2;
            // ans.push_back(arr[i++]);
            // ans.push_back(arr[j++]);

            while(j<size){

                front = arr[i];
                back = arr[j];

                if(i==0){
                    if(front>=back){
                        isPossible = false;
                        break;
                    }
                }else{
                    last = ans.back();

                    if(last<=front || front>= back){
                        isPossible = false;
                        break;
                    }
                }
            
                ans.push_back(arr[i++]);
                ans.push_back(arr[j++]);
           
            }
        }

        if(!isPossible || ans.front()>=ans.back()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=0; i<size; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}