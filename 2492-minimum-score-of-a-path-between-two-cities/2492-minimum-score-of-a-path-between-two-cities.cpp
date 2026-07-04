class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto& road:roads){
            int u = road[0];
            int v = road[1];
            int distance = road[2];
            adj[u].push_back({v,distance});
            adj[v].push_back({u,distance});
        }

        int max_search =0;
        for(auto& road:roads){
            max_search = max(max_search,road[2]);
        }

        int ans =max_search;
        vector<bool> visited(n,false);

        queue<int>q;

        q.push(1);
        visited[1]=true;

        while(!q.empty()){
            int current = q.front();
            q.pop();

            for(auto& edge: adj[current]){
                int neighbor = edge.first;
                int distance = edge.second;

                ans = min(ans,distance);

                if(!visited[neighbor]){
                    visited[neighbor]=true;
                    q.push(neighbor);
                }
            }
        }
        return ans;


    }
};