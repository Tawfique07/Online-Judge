#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node{
    int at,cost;
    Node(int _at, int _cost){
        at = _at;
        cost = _cost;
    }
};

bool operator<(Node A, Node B){
    return A.cost > B.cost;
}

struct Edge{
    int vertex, weight;
};

struct Distance{
    int cost, via;
};

int n;

void dijkstra( vector<Edge> adj[],Distance dist[]){
    priority_queue<Node> PQ;
    for(int i=1; i<=n; i++){
        dist[i].cost = -1;
        dist[i].via = -1;
    }

    dist[1].cost = 0;
    dist[1].via = 0;
    PQ.push(Node(1,0));

    while(!PQ.empty()){
        Node current = PQ.top();
        PQ.pop();

        if(current.cost != dist[current.at].cost){
            continue;
        }

        for (Edge edge: adj[current.at]){
            if((current.cost + edge.weight< dist[edge.vertex].cost)||dist[edge.vertex].cost==-1){
                dist[edge.vertex].cost = current.cost + edge.weight;
                PQ.push(Node(edge.vertex, dist[edge.vertex].cost));
                dist[edge.vertex].via = current.at;
            }
        }
    }

}

void display(int vertex,Distance * dist){
    if(vertex==n and dist[vertex].cost==-1){
        cout<<-1<<endl;
        return;
    }else if(vertex == 1){
        cout << 1 ;
        return;
    }else{
        display(dist[vertex].via,dist);
        cout << " "<< vertex;
        return;
    }
}

int main() {
    int m, a,b,w;
    cin>>n>>m;
    vector<Edge> adj[n+10];
    Distance dist[n+10];

    for(int i=1; i<=m; i++){
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    dijkstra(adj,dist);
//    cout<<dist[n].cost;
    display(n,dist);
    return 0;
}
