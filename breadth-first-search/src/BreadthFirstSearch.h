#ifndef BREADTH_FIRST_SEARCH_H
#define BREADTH_FIRST_SEARCH_H


#include "Vertex.h"

/// @brief Implementation of the Breadth-First Search algorithm
class BreadthFirstSearch {
// Constructors
public:
/// @brief Constucts a new Breadth-First Search with the given root vertex, 
/// pass a nullptr if the root vertex is to be specified later when the traverse method is called.
/// @param rootVertex The root vertex of the graph.
BreadthFirstSearch(Vertex* rootVertex);

// Interface
public:
/// @brief Traverses the graph starting with a starting vertex passes as an optional root parameter, using the Breadth-First Search algorithm.
void traverse();

/// @brief Traverses the graph starting with a starting vertex passes as a parameter, using the Breadth-First Search algorithm.
/// @param vertex The starting vertex of the graph.
void traverse(Vertex& vertex);

// Internals
private:
    Vertex* m_rootVertex = nullptr;
};


#endif