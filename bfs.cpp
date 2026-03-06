#include <bits/stdc++.h>
using namespace std;



#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int s, int n, const vector<vector<int>>& adj, vector<int>& d, vector<int>& p) {

	queue<int>q;
	vector<bool>vis(n,false);
	vis[s]=1;
	d[s]=0;
	p[s]=-1;
	q.push(s);
	while(!q.empty()){
		int node=q.front();
		q.pop();
		for(auto nbr:adj[node]){
			if(!vis[nbr]){
				vis[nbr]=1;
				d[nbr]=d[node]+1;
				p[nbr]=node;
				q.push(nbr);
			}
		}
	}


}

int main() {
    // Number of nodes (0 through 5)
    int n = 6; 
    
    // Adjacency list representation of the graph
    vector<vector<int>> adj(n);

    // Creating a sample undirected graph:
    // 0 --- 1 --- 3
    // |           |
    // 2 --- 4 --- 5
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {2, 5};
    adj[5] = {3, 4};

    int source = 0;
    
    // Output vectors for distances and parents
    vector<int> d(n, -1); // Initialize distances to -1 (representing unreachable)
    vector<int> p(n, -1); // Initialize parents to -1

    // Run BFS
    bfs(source, n, adj, d, p);

    // Print the shortest distances from the source
    cout << "Shortest distances from node " << source << ":\n";
    for (int i = 0; i < n; ++i) {
        if (d[i] != -1) {
            cout << "Node " << i << " -> Distance: " << d[i] << " (Parent: " << p[i] << ")\n";
        } else {
            cout << "Node " << i << " -> Unreachable\n";
        }
    }

    return 0;
}
