/*
Flood fill:

To perform a "flood fill", consider the starting pixel, plus any pixels 
connected 4-directionally to the starting pixel of the same color as the starting pixel, 
plus any pixels connected 4-directionally to those pixels (also with the same color as 
the starting pixel), and so on. Replace the color of all of the aforementioned pixels with 
the newColor.

Approach :

DFS

*/

// A C++ program to implement flood fill algorithm
#include<bits/stdc++.h>
using namespace std;
 
// Dimentions of paint screen
#define M 8
#define N 8
 
// A recursive function to replace previous color 'prevC' at  '(x, y)' 
// and all surrounding pixels of (x, y) with new color 'newC' and
 void flood(int i,int j,int c,int p,vector<vector<int> >& image)
    {
        if(i>=image.size() || j>=image[0].size() || i<0 || j<0 || image[i][j]==c)
            return;
       
        if(image[i][j]!=p)
            return;
        image[i][j]=c;
        flood(i+1,j,c,p,image);
        flood(i-1,j,c,p,image);
        flood(i,j+1,c,p,image);
        flood(i,j-1,c,p,image);
        
    }
    vector<vector<int> > floodFill(vector<vector<int> >& image, int sr, int sc, int newColor) {
        
        int p=image[sr][sc];
        flood(sr,sc,newColor,p,image);
        
        return image;
        
    }
// Driver program to test above function
int main()
{
    vector<vector<int>  > screen {
                    {1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 1, 1, 1, 1, 1, 0, 0},
                      {1, 0, 0, 1, 1, 0, 1, 1},
                      {1, 2, 2, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 2, 2, 0},
                      {1, 1, 1, 1, 1, 2, 1, 1},
                      {1, 1, 1, 1, 1, 2, 2, 1},
                     };
    int x = 4, y = 4, newC = 3;
    screen=floodFill(screen, x, y, newC);
 
    cout << "Updated screen after call to floodFill: \n";
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<N; j++)
           cout << screen[i][j] << " ";
        cout << endl;
    }
}


/*

INPUT:

1, 1, 1, 1, 1, 1, 1, 1
1, 1, 1, 1, 1, 1, 0, 0
1, 0, 0, 1, 1, 0, 1, 1
1, 2, 2, 2, 2, 0, 1, 0
1, 1, 1, 2, 2, 0, 1, 0
1, 1, 1, 2, 2, 2, 2, 0
1, 1, 1, 1, 1, 2, 1, 1
1, 1, 1, 1, 1, 2, 2, 1


OUTPUT:


Updated screen after call to floodFill: 
1 1 1 1 1 1 1 1 
1 1 1 1 1 1 0 0 
1 0 0 1 1 0 1 1 
1 3 3 3 3 0 1 0 
1 1 1 3 3 0 1 0 
1 1 1 3 3 3 3 0 
1 1 1 1 1 3 1 1 
1 1 1 1 1 3 3 1 

Time Complexity : O(N * M)
//Image dimensions

Space : O(1)
//Without considering recursion stack



*/