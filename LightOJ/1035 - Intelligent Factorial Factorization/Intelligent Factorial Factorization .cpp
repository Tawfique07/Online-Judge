#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool Prime[122] = {false};
vector<int> primes;
void prime();
void insert(vector<int> *q, int n);

int main() {
    prime();
    int T, Case=0;
    cin >> T;
    while (T--){
        int N,i,j=0;
        cin >> N;
        vector<int> factorials;
        vector<pair<int,int>> factors;

        for(i=2; i<=N; i++){
            insert( &factorials, i);
        }

        sort(factorials.begin(),factorials.end());

        factors.emplace_back(make_pair(factorials[0],1));
        for(int i=1; i < factorials.size(); i++){
            if(factors[j].first == factorials[i]){
                factors[j].second++;
            }
            else{
                factors.emplace_back(make_pair(factorials[i],1));
                j++;
            }
        }

        cout << "Case " << ++Case << ": "<<N << " = " <<factors[0].first<<" ("<< factors[0].second << ")";

        factors.erase(factors.begin(),factors.begin()+1);
        for(auto x: factors){
            cout <<" * " << x.first << " (" << x.second << ")";
        }
        cout<<endl;

    }

    return 0;
}

void prime(){
    Prime[1] = true;
    for(int i=2; i<=11; i++){
        if(!Prime[i]){
            for(int j=i*i; j<=120; j=j+i){
                Prime[j] = true;
            }
        }
    }
    for(int i = 2; i<= 100; i++){
        if(!Prime[i]){
            primes.emplace_back(i);
        }
    }
}
void insert(vector<int> *q, int n){
    if(n!=1){
        if(!Prime[n]){
            q->emplace_back(n);
        }
        else{
            for(int i=0; i<=n; i++){
                if(n%primes[i]==0){
                    q->emplace_back(primes[i]);
                    insert(q,n/primes[i]);
                    break;
                }
            }
        }
    }
}
