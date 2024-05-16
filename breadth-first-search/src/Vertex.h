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

// Interface
public:
    /// @brief Set the Vertex as visited.
    void setVisited();

    /// @brief Check if the Vertex is visited.
    bool visited() const;

    /// @brief Add an adjacent Vertex to the front of the list of adjacent vertices.
    void addAdjacentVertex(const Vertex& vertex);

    /// @brief Check if two Vertices are equal.
    bool equals(const Vertex& a, const Vertex& b);

    /// @brief Print the details of the Vertex to the console.
    void toString() const;

private:
    /// @brief The name of the Vertex.
    std::string m_name;

    /// @brief Flag that specifies whether the Vertex has been visited.
    bool m_visited = false;

    /// @brief The list of adjacent vertices.
    std::list<Vertex> m_adjacentVertices;
};