#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=1; i<=T; i++){
        int n;
        cin >> n;
        vector < pair<int,string>> vec;
        int a, b, c;
        string name;
        for(int j=0; j<n; j++){
            cin>> name >> a >> b >> c;
            vec.emplace_back(make_pair((a*b*c),name));
        }
        sort(vec.begin(),vec.end());
        cout << "Case "<<i<<": ";
        if(vec[0].first==vec[n-1].first){
            cout << "no thief"<<endl;
        }
        else
        {
            cout << vec[n-1].second <<" took chocolate from "<<vec[0].second<<endl;
        }
    }
    return 0;
}