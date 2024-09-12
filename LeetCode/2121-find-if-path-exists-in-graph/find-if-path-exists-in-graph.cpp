class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> dict;
        vector<bool> visited(n, false); // index will be vertex values
        for (int i = 0; i < edges.size() ; i++){
            int a = edges[i][0];
            int b = edges[i][1];
            dict[a].push_back(b);
            dict[b].push_back(a);
        } // adjacency dict created

        queue<int> q;
        q.push(source);
        visited[source] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            visited[curr] = true;
            for(int x : dict[curr]){
                if(!visited[x]){
                    visited[x] = true;
                    q.push(x);
                }
            }
            if(curr == destination){
                return true;
            }
        }
        return false;

    }
};