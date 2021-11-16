#pragma once

class Node {
public:
    int id;
    float val;
    Node(int s, float v);
};


class Edge {
public:
    int parent;
    int id;
    float val;
    Edge(int v, int u, float val);
};

class GreaterEdge {
public:
    bool operator()(Edge e1, Edge e2);
};

class LessEdge {
public:
    bool operator()(Edge e1, Edge e2);
};

class GreaterNode {
public:
    bool operator()(Node e1, Node e2);
};

class LessNode {
public:
    bool operator()(Node e1, Node e2);
};

