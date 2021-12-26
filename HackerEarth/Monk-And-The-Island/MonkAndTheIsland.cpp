#include<iostream>
#include<vector>
#include<queue>


using namespace std;

int solve(vector<int> edgeList[],int node){
    
    int distance[node], now = 1;
    bool visited[node]={false};
    queue<int> q;
    q.push(now);
    distance[now] = 0;
    visited[now] = true;
    while(!q.empty()){
        now = q.front();
        q.pop();
        if(now==node){
            return distance[now];
        }
        for(auto n: edgeList[now]){
            if(!visited[n]){
                visited[n] = true;
                distance[n] = distance[now]+1;
                q.push(n);
            }
        }
    }
    return distance[node-1];
}

int main(){
    int testCases;
    cin>> testCases;
    while(testCases--){
        int node, edges, start,end;
        cin>>node>>edges;
        vector<int> edgeList[++node];
        for(int i=0;i<edges; i++ ){
            cin>>start>>end;
            edgeList[start].push_back(end);
            edgeList[end].push_back(start);
        }
        cout<<solve(edgeList,node)<<endl;
    }

    return 0;
}