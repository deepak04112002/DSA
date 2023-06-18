//time=O(N^m)
//space-O(n)
bool isSafe(int node, int n, bool graph[101][101], vector<int>& color, int col){
        for(int k=0; k<n; k++){
            if(k != node && graph[k][node] == 1 && color[k] == col)
                return 0;
        }
        return 1;
    }
    
    bool solve(int node, bool graph[101][101], int m, int n, vector<int>& color){
        if(node == n)return 1;
        for(int i=1;i<=m;i++){
            if(isSafe(node,n,graph,color,i)){
                color[node] = i;
                if(solve(node+1,graph,m,n,color))return 1;
                color[node] = 0;
            }
        }
        return 0;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int> color(n,0);
        if(solve(0,graph,m,n,color))return 1;
        return 0;
    }