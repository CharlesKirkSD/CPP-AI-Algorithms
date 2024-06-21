#include "BreadthFirstSearch.h"


BreadthFirstSearch::BreadthFirstSearch(Vertex* rootVertex)
{
    m_rootVertex = rootVertex;
}

void BreadthFirstSearch::traverse()
{
    // If the root vertex was not set when the object was constructed then return.
    if (m_rootVertex == nullptr) {
        return;
    }
    traverse(*m_rootVertex);
}

void BreadthFirstSearch::traverse(Vertex& vertex)
{
    if (m_rootVertex == nullptr) {
        m_rootVertex = &vertex;
    }

    // Implement the Queue as a std::list which is a double linked list.
    std::list<Vertex*> queue;

    // Set the root vertex flag to visited, then add the root vertex to the Queue.
    m_rootVertex->setVisited();
    queue.push_back(m_rootVertex);

    // While the wqueue is not empty take the first item that was inserted and visit all of its adjacent vertices, 
    // then visit the adjacent verticess of the adjacent verticies repeating the process until the queue is empty.
    while (!queue.empty()) {
        // Take the next vertex from the head of the queue and remove it from the queue.
        Vertex* nextVertex = queue.front();
        queue.pop_front();
        nextVertex->toStringVisited();

        // Get the adjacent vertices of the vertex taken from the front of the queue and visit their adjacent vertices that have not been visited, 
        // setting their visited flag to true and then adding them to the front of the queue.
        for (Vertex* vertex: nextVertex->getAdjacencyList()) {
            if (!vertex->visited()) {
                vertex->setVisited();
                queue.push_back(vertex);
            }
        }
    }
}
