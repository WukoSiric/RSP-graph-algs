#include <iostream>
#include <list>
#include <vector>

class EdgeNode {
    int y; 
    int weight;
    EdgeNode * next;
};

class Graph {
    EdgeNode * edges; 
    std::vector<int> degrees;
    int n_vertices; 
    int n_edges;
    bool directed;
public:
    void insert_edge(Graph * g, int x, int y, bool directed) {
        EdgeNode * p; 
        p = new EdgeNode; 
    }
};

int main() {
    std::cout << "No algorithms currently implemented" << std::endl;
    return 0;
}