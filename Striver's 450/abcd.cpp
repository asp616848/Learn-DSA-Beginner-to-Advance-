#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
// queue implementation of Graph
class Graph {
    int nodes;
    vector<vector<int>> mat;   // dynamic vector of pointers can be used as well instead of 2d vector
public:
    Graph(int nodes);
    void addEdge(int v, int w);
    void printGraph();
    void BFS(int data);
    void DFS(int data);
};

void Graph :: BFS(int data) {
    bool *removed = new bool[nodes];// array of bools to store queue removed nodes
    for(int i = 0; i < nodes; i++) {
        removed[i] = false;
    }
    queue<int> q;
    removed[data] = true;
    q.push(data);
    while(!q.empty()) {
        data = q.front();
        cout << data << " ";
        q.pop();
        for(int i = 0; i < mat[data].size(); i++) {
            if(!removed[mat[data][i]]) {
                removed[mat[data][i]] = true;
                q.push(mat[data][i]);
            }
        }
    }
}

void Graph :: DFS(int data) { //copy of BFS but stack logic implements DFS(as last in first out)
    bool *removed = new bool[nodes]; // array of bools to store stack removed nodes
    for(int i = 0; i < nodes; i++) {
        removed[i] = false;
    }
    stack<int> s;
    removed[data] = true;
    s.push(data);
    while(!s.empty()) {
        data = s.top();
        cout << data << " ";
        s.pop();
        for(int i = 0; i < mat[data].size(); i++) {
            if(!removed[mat[data][i]]) {
                removed[mat[data][i]] = true;
                s.push(mat[data][i]); // pushes all unvisited edges in stack
            }
        }
    }
}

void Graph :: addEdge(int v, int w) {
    mat[v].push_back(w);
    mat[w].push_back(v);
}

Graph::Graph(int node) : nodes(node), mat(node) {
    cout << "Graph Created!" << endl;
}

void Graph :: printGraph() {
    for(int i = 0; i < nodes; i++) {
        cout << "this is connected to:" << i << endl;
        for(int x : mat[i]) {
            cout << " -> " << x;
        }
        cout << endl;
    }
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.BFS(2);
    cout << endl;
    g.DFS(2);
    return 0;
}