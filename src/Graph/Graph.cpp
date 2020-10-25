#include "Graph.h"
using namespace std;

Graph::Graph(int V)
{
    this-> V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // this adds w to v's list
}

void Graph::DFSUtil(int v, bool visited[])
{
    // Mark current as visited and print
    visited[v] = true;
    cout << v << " ";

    // Recur for all adjacent vertices to v
    // Need to create iterator over list of ints adj
    list<int>::iterator it;

    // iterate with iterator
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
        // if the vertice is not visited, then recursively call DFSUtil on it
        if (!visited[*it])
            DFSUtil(*it, visited);
}

// DFS traversal of vertices reachable from v, using DFSUtil
void Graph::DFS(int v)
{
    // mark all as not visited
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function 
    DFSUtil(v, visited)''
}

// BFS traversal of vertices reachable from V
void Graph::BFS(int v)
{
    // mark all as not visited
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    visited[v] = true;
    queue.push_back(v);

    // create iterator over adjacent
    lsit<int>::iterator it;

    while (!queue.empty())
    {
        // Deque vertex f from queue and print it
        v = queue.front();
        cout << v << ::;
        queue.pop_front();


        // Get all adjacent vertices of dequed vertex v
        // If adjacent not bisited, mark it visited and queue it
        for (it = adj[v].begin(); it != adj[v].end(); ++it)
        {
            if (!visited[*it])
            {
                visited[*it] = true;
                queue.push_back(*it);
            }
        }
    }
}

