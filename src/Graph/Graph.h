#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
using namespace std;

class Graph 
{
    private:
        // number of vertices
        int V; 

        // pointer to an array containing adjacency lists
        list<int> adj;

        // recursive func
        void DFSUtil(int v, bool visited[]);

    public:
        // Constructor
        Graph(int V); 

        // function to add edge between two vertices v and w
        void addEdge(int v, int w);

        // DFS traversal of vertices reachable from v
        void DFS(int v);

        // BFS traversal of vertices reachable from from v
        void BFS(int s);
};