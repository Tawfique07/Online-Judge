#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<queue>
#define ll long long

using namespace std;

typedef struct{
    ll start;
    ll end;
    bool check;
}process;


void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
}

// bool operator<(const process& a, const process& b)
// {
//     return a.start < b.start;
// }

// bool compare_process_end(const pair<ll,ll> &p1,const pair<ll,ll> &p2){
//     return p1.second < p2.second;
// }

int main(){

    fastIO();
    int test, _case = 1;
    cin >> test;
    for (; _case <= test; _case++)
    {
        int n;
        vector<pair<ll, ll>> processes;
        priority_queue<int, vector<int>, greater<int> > monitor;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll start, end;
            cin >> start >> end;
            processes.push_back(make_pair(start, end));
        }
        sort(processes.begin(), processes.end());

        // for (int i = 0; i < n; i++){
        //     cout << "start :" << processes[i].first << ", end: " << processes[i].second << endl;
        // }

        monitor.push(processes[0].second);

        for (int i = 1; i < n; i++)
        {
            if(monitor.top() < processes[i].first){
                monitor.pop();
                monitor.push(processes[i].second);
            }else{
                monitor.push(processes[i].second);
            }
        }
        // for (int i = 0; i < monitor.size(); i++){
        //     cout << "start :" << monitor[i].first << ", end: " << monitor[i].second << endl;
        // }

        cout << "Case " << _case << ": "<<monitor.size()  << endl;
    }
    return 0;
}