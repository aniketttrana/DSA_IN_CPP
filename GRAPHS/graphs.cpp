// undirected : does not have arrows
// LINE refers as edge 
// EDGE is biderectional

// directed : have arrows
// they have nodes or vertices (N/V)
// Numbering of nodes have any order

/*CYCLES IN A GRAPH : start from 1 place and reach to that place

0----0              
|    |
|    |   Undirected Cyclic graph
0----0
\   /
 \ /
  0

0--->0              
|    ^
|    |   directed ACyclic graph
0--->0
\   /
 \ /
  0


Path: 1->3-3-4 
If we can go through this  then this is the path

Degree: The number of edges go inside and outside of the Node

For undirected graph : the no. of edges connected to that node 

Property: The total  degree of a graph is equaal to twice of number of edges.
Total degree= 2*edges.

Directed graph: Indegree+Outdegree =Toatl degree

The no. of incoming edges is Indegree
The no of outdegree edges is Outdegree

Edge weight: ANy 
if not then we consider unit weight i.e 1

*/ 
