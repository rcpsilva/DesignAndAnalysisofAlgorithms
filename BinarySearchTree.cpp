#include "BinarySearchTree.h"

#include <concepts>
#include <iostream>
#include "BinarySearchTree.h"

template<std::totally_ordered T>
class BinarySearchTree
{
	class BSTNode {
	public:
		T value;
		std::unique_ptr<BSTNode> left;
		std::unique_ptr<BSTNode> right;

		BSTNode(T v) { value = v; }
	};


public:

	BinarySearchTree() {};

	InsertionInfo insert(T v) {
		return insert(v, root);

	}

	SearchInfo search(T v) {
		return search(v, root);
	}
	
	
	void print() {
		return print(root);

	}

private:

	std::unique_ptr<BSTNode> root;

	InsertionInfo insert(T v, std::unique_ptr<BSTNode>& node) {
		if (!node) {
			node = std::make_unique<BSTNode>(v);
			return InsertionInfo::Inserted;
		}
		else if (v == node->value) {
			return InsertionInfo::AlreadyIn;
		}
		else {
			return (v < node->value) ? insert(v, node->left) : insert(v, node->right);
		}
	}

	SearchInfo search(T v, std::unique_ptr<BSTNode>& node) {
		if (!node) {
			return SearchInfo::NotFound;
		}

		if (v == node->value) {
			return SearchInfo::Found;
		}
		else {

			if (v < node->value) {
				return search(v, node->left);
			}
			else {
				return search(v, node->right);
			}
		}

	}

	
	void print(std::unique_ptr<BSTNode>& node) {
		if (!node) {
			return;
		}

		print(node->left);
		std::cout << node->value << "\t";
		print(node->right);
	}
};