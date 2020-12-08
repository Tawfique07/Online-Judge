#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n,it=0;
    cin >> n;
    vector<pair<int,string>> vect;


    string str;
    cin>>str;
    for(int i=0;i<n-1; i++){
       string a(str.substr(i,2));
        if(i==0)
        {
            vect.emplace_back(make_pair(1, a));
            it++;
        }
        else{
            int j;
            for( j=0; j<it;j++){
                if(vect[j].second==a){
                    vect[j].first++;
                    break;
                }
            }
            if(j==it)
            {
                vect.emplace_back(make_pair(1,a));
                it++;
            }
        }
    }
    sort(vect.begin(),vect.end());

    cout << vect[it-1].second <<endl;
    return 0;
}