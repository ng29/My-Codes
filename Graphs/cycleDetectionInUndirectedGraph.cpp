/*

Detect cycle in a Un Directed Graph :

What you do in DFS ?

Look for back edge.

Can you use the same method here ?

No.

Why ?

When you are looking foe a back-edge in a undirected graph , obviously the parent will be counted
i.e the node where it came from.
But that does not contribute to a cycle in a Undirected graph.


Approach :

It's simple.Just keep checking for already visited nodes , Provided it is not the parent of the current 
node.Then cycle exists :)

*/

#include<bits/stdc++.h>
using namespace std; 
 
bool iscyclic(int s,vector<vector<int> > &adj,vector<bool> &visited,int parent) 
{ 

    if(visited[s]==false){
    //Mark the current node as visited and  print it 
     visited[s]=true;
     vector<int> :: iterator i;
    // Recur for all the vertices adjacent  to this vertex 
        for (i = adj[s].begin(); i != adj[s].end(); i++) 
        { 
            if (!visited[*i] && iscyclic(*i,adj,visited,s)) 
            { 
               return true;
            } 
            //If you find any other node other than parent that is already visited
            else if(*i!=parent)
            {
                return true;
            }
        } 

    }
    return false;


    
    
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
    bool cyclic=false;

    //Looping if in case the graph is not connected
    for(int i=0;i<vertices;i++){
        if(iscyclic(i,adj,visited,-1)){
            cyclic=true;
            break;

        }
    }



    if(cyclic==true)
        cout<<"Cycle is present";
    else
        cout<<"Cycle is not present"; 
  
    return 0; 
} 
/*

INPUT :

      1 - 4
     /     \
    0 -2 - 6
     \
      3- 5


OUTPUT:

Cycle is present


Time Complexity: O(V+E). 
Space Complexity : O(V).
*/