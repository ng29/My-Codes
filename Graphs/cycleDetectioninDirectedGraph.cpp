/*
Detect cycle in a Directed Graph:

When do you say a graph has a cycle ?

When there is a edge(back-edge) from any of it's children to ancestors.

Approach :

Use a another boolean array to keep track of the nodes visited during recursion.
While traversing if any of it's chidren is already in the recursion stack and is visited
then the graph contains a cycle.

Using DFS.


*/

#include<bits/stdc++.h>
  
using namespace std; 
 
bool iscyclic(int s,vector<vector<int> > &adj,vector<bool> &visited,vector<bool> &rec) 
{ 

    if(visited[s]==false){
    //Mark the current node as visited and  print it 
     visited[s]=true;
     rec[s]=true;
     
     vector<int> :: iterator i;
    // Recur for all the vertices adjacent  to this vertex 
        for (i = adj[s].begin(); i != adj[s].end(); i++) 
        { 
            if (!visited[*i] && iscyclic(*i,adj,visited,rec)) 
            { 
               return true;
            } 
            //The node is in the recursion stack
            else if(rec[*i]==true)
            {
                return true;
            }
        } 

    }

    //Mark the current node in recursionn false as it has come out of the recursion stack
    rec[s]=false;
    return false;


    
    
} 
 
int main() 
{ 
    // Create a graph given in the above diagram 
    int vertices=4;
    //Adjacency list representation  of the graph is represented using 2-D vector
    vector<vector<int> > adj(vertices);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(0);
    adj[3].push_back(3);

    vector<bool> visited(vertices,false) ;
    vector<bool> rec(vertices,false) ;
  

  
    int start=0;
    bool cyclic=false;

    for(int i=0;i<vertices;i++){
        if(iscyclic(i,adj,visited,rec)){
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


INPUT:


0---->1

0---->2 
2---->0 //While you are checking for 2's (i.e from 0) neighours you will find 0 in the rec stack


1---->2

3---->3 //Self loop

2---->3

OUTPUT:

Cycle is present


Time Complexity: O(V+E). 
Space Complexity : O(V).

*/

