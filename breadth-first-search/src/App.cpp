#include <iostream>

#include "Vertex.h"

int main(int argc, char* argv[])
{
    std::cout << "Breadth-First Search in C++" << std::endl;

    Vertex vertex("My first vertex");

    Vertex a("A");
    Vertex b("B");

    vertex.addAdjacentVertex(a);
    vertex.addAdjacentVertex(b);

    vertex.toString();
}