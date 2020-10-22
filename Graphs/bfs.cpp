/*

Graph Traversals 

Breadth First Traversal:

BFS is a traversing algorithm where you should start traversing from a selected node 
(source or starting node) and traverse the graph layerwise thus exploring 
the neighbour nodes (nodes which are directly connected to source node)

It is similar to a Level Order Traversal of a Binary Tree .

Example :
      1 - 4
     /     \
    0 -2 - 6
     \
      3- 5
 
        0 ->Starting Node

        Visit all neighbours of 0 ie 1,2,3
        Then visit 1's neighbours ie 4
        then visit 2's neighbours ie 6
        Then visit 3's neighbours ie 5



        As you are visiting the nodes, mark them as visited so as to avoid cycles.


*/

#include<bits/stdc++.h>
  
using namespace std; 
 
void BFS(int s,vector<vector<int> > &adj,int V) 
{ 
    // Mark all the vertices as not visited 
    vector<bool> visited(V,false) ;
  
    // Create a queue for BFS 
    queue<int> q; 
  
    // Mark the current node as visited and enqueue it 
    visited[s] = true; 
    q.push(s); 
  
    while(!q.empty()) 
    { 
        // Dequeue a vertex from queue and print it 
        int s = q.front(); 
        cout << s << " "; 
        q.pop(); 
  
        // 'i' will be used to get all adjacent  vertices of a vertex 
        // Get all adjacent vertices of the vertex s. If a adjacent vertex has not been visited, then mark it visited and enqueue it 
        vector<int> :: iterator i;
        for (i = adj[s].begin(); i != adj[s].end(); i++) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                q.push(*i); 
            } 
        } 
    } 
} 
 
int main() 
{ 
    // Create a graph given in the above diagram 
    int vertices=7;
    //Adjacency list representation  of the graph is represented using 2-D vector
    vector<vector<int> > adj(vertices);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(6);
    adj[4].push_back(6);
    adj[3].push_back(5);

  
    int start=0;
    cout << "Following is Breadth First Traversal from vertex from :"<<start<<endl; 
    BFS(start,adj,vertices); 
  
    return 0; 
} 


/*

INPUT:

      1 - 4
     /     \
    0 -2 - 6
     \
      3- 5



OUTPUT:

 
Following is Breadth First Traversal from vertex from :0
0 1 2 3 4 6 5 


Time Complexity: O(V+E) 
V-> No of vertices
E-> No of Edges

Space Complexity : O(V)
For additonal Visited array

*/