/*

Graph Traversals 

Depth First Traversal:

The algorithm starts at the root node (selecting some arbitrary node as the root 
node in the case of a graph) and explores as far as possible along each branch before 
backtracking. So the basic idea is to start from the root or any arbitrary node and 
mark the node and move to the adjacent unmarked node and continue this loop until 
there is no unmarked adjacent node. Then backtrack and check for other unmarked nodes 
and traverse them. Finally print the nodes in the path.


Example :
      1 - 4
     /     \
    0 -2 - 6
     \
      3- 5
 
        0 ->Starting Node

        Travel along the path starting from 0 until you find no edge to continue the path or a already visited node
       
       From 0 -> 1-> 4-> 6 -> 2 ->0(Already visited)
       Come's back all the way from 2 and check if there are any adjacent nodes.
       Here 2 , 6, 4 ,1 these node's neighbours are already visited.
       Come back to 0,
       Then again 0 ->3 ->5



        As you are visiting the nodes, mark them as visited so as to avoid cycles.


*/

#include<bits/stdc++.h>
  
using namespace std; 
 
void DFS(int s,vector<vector<int> > &adj,vector<bool> &visited) 
{ 
    //Mark the current node as visited and  print it 
     visited[s]=true;
     cout<<s<<" ";
     
     vector<int> :: iterator i;
    // Recur for all the vertices adjacent  to this vertex 
        for (i = adj[s].begin(); i != adj[s].end(); i++) 
        { 
            if (!visited[*i]) 
            { 
                DFS(*i,adj,visited);
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

    vector<bool> visited(vertices,false) ;
  

  
    int start=0;
    cout << "Following is Depth First Traversal from vertex from :"<<start<<endl; 
    DFS(start,adj,visited); 
  
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

 
Following is Depth First Traversal from vertex from :0
0 1 4 6 2 3 5 



Time Complexity: O(V+E) 
V-> No of vertices
E-> No of Edges

Space Complexity : O(V)
For additonal Visited array

*/