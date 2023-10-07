#include <iostream>
#include <vector>
using namespace std;
/* Given N(nodes) and M(edges)  5  6
m lines                      1--2 0r 2  1
1 -3
2 4
3 4
2 5
4 5
*/
/*

Storing
1. Adjacency matrix way
2. List way

Take adj[n+1][n+1]
space-(N*N)
Make it like Matrix
0 1 2 3 4 5
0
1
2
3
4
5

Make 1 where there is an edge and 0 where there is none

*/
int main()
{
  // int n,m;
  // cin>>n>>m;
  // int adj[n+1][m+1];
  // for(int i=0;i<m;i++){
  //     int u ,v;
  //     // inside matrix we take
  //     // input of what we are joining
  //     cin>>u>>v;
  //     // now mark it both ways 1
  //     adj[u][v]=1;
  //     adj[v][u]=1;
  // }
  // Time complexity - O(n)
  // // Space is n*n ; so this is where adjacency list comes into play

  // LIST
  // we create a list of arrays
  // IN C++ LIST is nothing but vector
  // vector<int> adj[n+1]
  /*

  1----3
  |    |
  |    |   Undirected Cyclic graph
  2----4
  \   /
   \ /
    5

  0
  here we store 1 neighbour connected edges
  1 - {2,3}
  2 - {1,4,5}
  3 - {1,4}
  4 - {2,3,5}
  5 - {2,4}
Space -2Edges


  */

  int n, m;
  cin >> n >> m;
  vector<int> adj[n + 1];
  // if we there is weight given we defined push it as pairs
  // pair<int,int>
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    // if there is directed graph
    // u-->v
    // adj[v].push_back(u); // line is not required
    // in that case space complexity is o(E)

    adj[u].push_back(v);
    adj[v].push_back(u);
  }
}