#include <iostream>
#include <vector>

using namespace std;
// Vector implementation of Graph
class Graph {
    int nodes;
    vector<int> *mat;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void printGraph();
    void BFS(int s);
};

void Graph :: BFS(int s) {
    bool *visited = new bool[nodes];
    for(int i = 0; i < nodes; i++) {
        visited[i] = false;
    }
    vector<int> queue;
    visited[s] = true;
    queue.push_back(s);
    vector<int> :: iterator i;
    while(!queue.empty()) {
        s = queue.front();
        cout << s << " ";
        queue.erase(queue.begin());
        for(i = mat[s].begin(); i != mat[s].end(); i++) {
            if(!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

Graph :: Graph(int V) {
    this->nodes = V;
    mat = new vector<int>[V];
}

void Graph :: addEdge(int v, int w) {
    mat[v].push_back(w);
    mat[w].push_back(v);
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
    g.printGraph();
    return 0;
}