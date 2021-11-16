#include <ostream>
#include "Elements.h"

Node::Node(int s, float v) {
	id = s;
	val = v;
}

Edge::Edge(int a, int b, float c) {
	parent = a;
	id = b;
	val = c;
}

bool GreaterEdge::operator()(Edge e1, Edge e2) {
	return e1.val > e2.val;
}

bool LessEdge::operator()(Edge e1, Edge e2) {
	return e1.val < e2.val;
}

bool GreaterNode::operator()(Node e1, Node e2) {
	return e1.val > e2.val;
}

bool LessNode::operator()(Node e1, Node e2) {
	return e1.val < e2.val;
}