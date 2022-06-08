// Graphs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include<string>
#include <vector>

namespace Graph {
    class Vertex
    {
    public:

        Vertex() {}
        virtual ~Vertex() {}

        // list of edges 
        std::vector<Edge*> edges;

        // custom user data (alternative to deriving) 
        void* userData = nullptr;
    };

    // define an edge / link 
    class Edge {
    public:

        Edge(Vertex* t = nullptr) : target(t) {}
        virtual ~Edge() {}

        // the target vertex 
        Vertex* target;

        // custom user data (alternative to deriving) 
        void* userData = nullptr;
    };

    // MORE WILL GO HERE! 
}
class Graph
{
public:
    struct Node;

    struct Edge
    {
        Node* start;
        Node* end;
        int weight;
    };

    struct Node
    {
        std::string name;
        std::list<Edge> edges;
    };

    ~Graph()
    {
        for (Node* node : m_nodes)
        {
            delete node;
        }
    }

    Node* createNode()
    {
        Node* newNode = new Node();
        m_nodes.push_back(newNode);
        return newNode;
    }
private:
    std::list<Node*> m_nodes;
    // graphs 


        
};