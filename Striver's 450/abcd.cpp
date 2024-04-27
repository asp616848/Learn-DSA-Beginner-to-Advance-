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
    void BFS(int s);
    void DFS(int s);
};

void Graph :: BFS(int s) {
    bool *removed = new bool[nodes];
    for(int i = 0; i < nodes; i++) {
        removed[i] = false;
    }
    queue<int> q;
    removed[s] = true;
    q.push(s);
    while(!q.empty()) {
        s = q.front();
        cout << s << " ";
        q.pop();
        for(int i = 0; i < mat[s].size(); i++) {
            if(!removed[mat[s][i]]) {
                removed[mat[s][i]] = true;
                q.push(mat[s][i]);
            }
        }
    }
}

void Graph :: DFS(int s) {
    bool *removed = new bool[nodes];
    for(int i = 0; i < nodes; i++) {
        removed[i] = false;
    }
    stack<int> st;
    removed[s] = true;
    st.push(s);
    while(!st.empty()) {
        s = st.top();
        cout << s << " ";
        st.pop();
        for(int i = 0; i < mat[s].size(); i++) {
            if(!removed[mat[s][i]]) {
                removed[mat[s][i]] = true;
                st.push(mat[s][i]);
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