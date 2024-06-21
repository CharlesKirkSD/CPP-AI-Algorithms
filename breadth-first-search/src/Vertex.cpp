#include <iostream>
#include <iomanip>
#include <functional>

#include "Vertex.h"


Vertex::Vertex(std::string name)
{
    this->m_name = name;
    this->m_visited = false;
}

void Vertex::setVisited()
{
    m_visited = true;
}

bool Vertex::visited() const
{
    return m_visited;
}

std::list<Vertex*> Vertex::getAdjacencyList() const
{
    return m_adjacentVertices;
}

void Vertex::addAdjacentVertex(Vertex* vertex)
{
    // Test whether the vertex is already in the list, if it is then return.
    for (Vertex* v: m_adjacentVertices) {
        if (vertex == v) {
            return;
        }
    }

    m_adjacentVertices.push_back(vertex);
}

bool Vertex::equals(const Vertex* a, const Vertex* b)
{
    return a->m_name == b->m_name;
}

void Vertex::toString() const
{
    std::cout << std::endl;
    std::cout << std::boolalpha << "--- Vertex details ---\n" << "Vertex name: " << m_name << "\nVisited: " << visited() << std::endl;
    
    // Output the list of adjacent vertices
    for (Vertex* v: m_adjacentVertices)
    {
        std::cout << "Adjacent vertex: " << v->m_name << std::endl;
    }
}

void Vertex::toStringVisited() const
{
    std::cout << "Vertex visited: " << m_name << std::endl;
}

