#include <iostream>
#include <memory>

#include "Vertex.h"
#include "BreadthFirstSearch.h"

int main(int argc, char* argv[])
{
    std::cout << "Breadth-First Search in C++" << std::endl;

    BreadthFirstSearch* breadthFirstSearch = new BreadthFirstSearch(nullptr);

    std::unique_ptr<BreadthFirstSearch> uniqueBreadthFirstSearch(new BreadthFirstSearch(nullptr));

    // Add the vertices
    Vertex a("A");
    Vertex b("B");
    Vertex c("C");
    Vertex d("D");
    Vertex e("E");
    Vertex f("F");
    Vertex g("G");
    Vertex h("H");

    // Add the adjacent vertices
    a.addAdjacentVertex(&b);
    a.addAdjacentVertex(&f);
    a.addAdjacentVertex(&g);
    // a.addAdjacentVertex(&b);    // Additional entry to test the effect of duplicate entries in the list.

    b.addAdjacentVertex(&a);
    b.addAdjacentVertex(&c);
    b.addAdjacentVertex(&d);

    c.addAdjacentVertex(&b);

    d.addAdjacentVertex(&b);
    d.addAdjacentVertex(&e);

    // e.addAdjacentVertex(&d);

    f.addAdjacentVertex(&a);

    g.addAdjacentVertex(&a);
    g.addAdjacentVertex(&h);

    h.addAdjacentVertex(&g);


    uniqueBreadthFirstSearch->traverse(a);
}