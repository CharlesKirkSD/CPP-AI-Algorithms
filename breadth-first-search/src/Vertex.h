#include <string>
#include <list>

/**
 * @brief The Vertex class represents a node or vertex in a graph.
 */
class Vertex {
// Constructors
public:
    /// @brief Constructs a new Vertex with the given name.
    /// @param name The name of the Vertex.
    Vertex(std::string name);

// Internal Methods
public:

private:
    /// @brief The name of the Vertex.
    std::string name;

    /// @brief The list of adjacent vertices.
    std::list<Vertex> adjacentVertices;
};