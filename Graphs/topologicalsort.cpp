/*
Topological Ordering:

Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices
 such that for every directed edge u v, vertex u comes before v in the ordering. 
Topological Sorting for a graph is not possible if the graph is not a DAG.

A graph can have many topological orderings

To check :
A graph should not contain cycle if it has topological ordering is not feasible.

Example :
       1 -> 4
   
   Here we have a edge from 1-> 4 which means ro reach 4 ,1 should be visited .

   Ordering : 1,4

Applications:

Any kind of problems like "prerequisites" "this should come after that" etc

Approach :

DFS. Once the vertex comes out of the DFS call store it.Your final answer will be
 the reverse of how  you stored them.
 (Use a stack)


*/


// A C++ program to print topological 
// sorting of a DAG 
#include<bits/stdc++.h>
  
using namespace std; 
 
void TopoSort(int s,vector<vector<int> > &adj,vector<bool> &visited,stack<int> &ordering) 
{ 
    //Mark the current node as visited and  print it 
     visited[s]=true;
     vector<int> :: iterator i;
    // Recur for all the vertices adjacent  to this vertex 
    for (i = adj[s].begin(); i != adj[s].end(); i++) 
    { 
        if (!visited[*i]) 
        { 
                TopoSort(*i,adj,visited,ordering);
        } 
    } 
    //Once it comes out of the DFS push it to the answer.
    ordering.push(s);
    
} 
 
int main() 
{ 
    // Create a graph given in the above diagram 
    int vertices=4;
    //Adjacency list representation  of the graph is represented using 2-D vector
    vector<vector<int> > adj(vertices);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);

    vector<bool> visited(vertices,false) ;
  

  
    cout << "Following is the Topological ordering of the given graph :"<<endl; 
    stack<int> ordering;

    for (int i = 0; i < vertices; i++) 
        if (visited[i] == false) 
            TopoSort(i,adj,visited,ordering); 

    while(!ordering.empty())
    {
        cout<<ordering.top()<<" ";
        ordering.pop();
    }
  
    return 0; 
} 

/*

INPUT :

0 -> 1 -> 3 
0->3

OUTPUT:

Following is the Topological ordering of the given graph :
0 2 1 3 


Time Complexity: O(V+E) 
V-> No of vertices
E-> No of Edges

Space Complexity : O(V)
For additonal stack and Visited array
*/