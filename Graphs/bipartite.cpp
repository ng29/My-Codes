/*
Bi-Partite Graph:

A graph is bipartite if we can split its set of nodes 
into two independent subsets A and B, such that every edge in the graph has one node 
in A and another node in B.

Example :

0 ----- 1
|       |
3 ----- 2

We can divide the vertices int two groups:

(0,2) and (1,3)



Approach :

A bipartite graph is possible if the graph coloring is possible using two colors 
such that vertices in a set are colored with the same color. Note that it is possible to 
color a cycle graph with even cycle using two colors.




*/



// C++ program to find out whether a  given graph is Bipartite or not 
#include <iostream> 
#include <queue> 
#define V 4 

using namespace std; 

// This function returns true if graph  G[V][V] is Bipartite, else false 
bool isBipartite(int G[][V], int src) 
{ 
	//Initialise the color array with -1 initially
	int colorArr[V]; 
	for (int i = 0; i < V; ++i) 
		colorArr[i] = -1; 

	// Assign first color to source 
	colorArr[src] = 1; 

	// Create a queue for BFS traversal
	queue <int> q; 
	q.push(src); 

	// Run while there are vertices in queue (Similar to BFS) 
	while (!q.empty()) 
	{ 
		// Dequeue a vertex from queue 
		int u = q.front(); 
		q.pop(); 

		// Return false if there is a self-loop 
		if (G[u][u] == 1) 
		return false; 

		// Find all non-colored adjacent vertices 
		for (int v = 0; v < V; ++v) 
		{ 
			// An edge from u to v exists and  destination v is not colored 
			if (G[u][v] && colorArr[v] == -1) 
			{ 
				// Assign alternate color to this adjacent v of u 
				colorArr[v] = 1 - colorArr[u]; 
				q.push(v); 
			} 

			// An edge from u to v exists and destination  v is colored with same color as u 
			else if (G[u][v] && colorArr[v] == colorArr[u]) 
				return false; 
		} 
	} 

	// If we reach here, then all adjacent 
	// vertices can be colored with alternate color 
	return true; 
} 

// Driver program to test above function 
int main() 
{ 
	int G[][V] = {{0, 1, 0, 1}, 
		{1, 0, 1, 0}, 
		{0, 1, 0, 1}, 
		{1, 0, 1, 0} 
	}; 

	isBipartite(G, 0) ? cout << "Yes" : cout << "No"; 
	return 0; 
} 

/*
INPUT:

0 ----- 1
|       |
3 ----- 2

OUTPUT:

Yes



Time Complexity: O(V ^ 2) 
V-> No of vertices (Since adjacency matrix representation)
If it was Adjacency list ( O(V + E))
E-> No of Edges

Space Complexity : O(V)
For additonal Visited array


*/