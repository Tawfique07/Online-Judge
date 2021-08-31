#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

  
// Driver function to sort the vector elements
// by second element of pairs
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main(){
    int order, start, end, acc_count = 1 ;
    cin >> order;
    vector<pair<int,int>> orders;
    for (int i = 0; i < order; i++){
        cin >> start >> end;
        orders.push_back(make_pair(start,end));
    }

    sort(orders.begin(), orders.end(), sortbysec);
    for (int i = 0, j = 1; j < order; j++){
        if(orders[i].second<orders[j].first){
            acc_count++;
            i = j;
        }
    }
    cout << acc_count << endl;

    return 0;
}