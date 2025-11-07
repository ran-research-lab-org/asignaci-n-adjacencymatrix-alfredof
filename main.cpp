#include "Graph.hpp"
#include <iostream>

using namespace std;

int main() {
    Graph G(10);
    G.addEdge(0, 9);
    G.addEdge(4, 2);
    G.addEdge(3, 2);
    G.addEdge(1, 2);

    cout << "Matriz:" << endl;
    G.print();
    
    cout << "\nTotal de aristas: " << G.numEdges() << endl;
    
    cout << "\nIn-degrees:" << endl;
    cout << "Nodo 2: " << G.inDegree(2) << endl;
    cout << "Nodo 9: " << G.inDegree(9) << endl;
    
    cout << "\n¿Nodo 2 es influencer? " << (G.isInfluencer(2) ? "Si" : "No") << endl;
    
    return 0;
}