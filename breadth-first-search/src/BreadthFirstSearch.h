#include "Vertex.h"

/// @brief Implementation of the Breadth-First Search algorithm
class BreadthFirstSearch {
// Constructors
public:
/// @brief Constucts a new Breadth-First Search with the given root vertex.
/// @param rootVertex The root vertex of the graph.
BreadthFirstSearch(Vertex* rootVertex);

// Interface
public:
/// @brief Traverses the graph using the Breadth-First Search algorithm.
void traverse();

// Internals
private:
    Vertex* m_rootVertex = nullptr;
};