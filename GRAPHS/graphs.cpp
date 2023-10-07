// A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).

// undirected : does not have arrows
// LINE refers as edge
//  Two nodes are connected by horizontal line called
// EDGE is biderectional ( like u<->v)
// Binary trees is a also a graph (It doesnot mean that it has structure)

// directed : have arrows
// they have nodes or vertices (N/V)
// Numbering of nodes have any order

/*CYCLES IN A GRAPH : when we start from 1 place and reach to that place in final then we can call it as cycle

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


Path: 1->3--4(conatin a lot of nodes or vertices)
If we can go through this  then this is the path
A node cannot appear twice in a path

Degree: The number of edges go inside and outside of the Node

/***For undirected graph : the no. of edges connected to that node****

Property: The total  degree of a graph is equaal to twice of number of edges.
Total degree= 2*edges.
0----0
|    |
|    |   Undirected Cyclic graph
0----0
\   /
 \ /
  0

*****
Directed graph: Indegree+Outdegree =Toatl degree

The no. of incoming edges is Indegree
The no of outdegree edges is Outdegree

Edge weight(Horizontal line --): ANy
if not then we consider unit weight i.e 1

*/
