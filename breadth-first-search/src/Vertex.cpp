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

void Vertex::addAdjacentVertex(const Vertex& vertex)
{
    m_adjacentVertices.push_front(vertex);

    // Remove duplicates from the list, passing the member function equals() to the unique() function with std::bind.
    m_adjacentVertices.unique(std::bind(&Vertex::equals, this, std::placeholders::_1, std::placeholders::_2));
}

bool Vertex::equals(const Vertex& a, const Vertex& b)
{
    return a.m_name == b.m_name;
}

void Vertex::toString() const
{
    std::cout << std::endl;
    std::cout << std::boolalpha << "--- Vertex details ---\n" << "Vertex name: " << m_name << "\nVisited: " << visited() << std::endl;
    
    // Output the list of adjacent vertices
    for (Vertex v: m_adjacentVertices)
    {
        std::cout << "Adjacent vertex: " << v.m_name << std::endl;
    }
}
