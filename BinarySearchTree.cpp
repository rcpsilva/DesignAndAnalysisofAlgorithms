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

	void preorder() {
		preorder(root);
	}

	void inorder() {
		inorder(root);
	}

	void posorder() {
		posorder(root);
	}

	void reverse() {
		reverse(root);
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
		else if (v == node->value) {
			return SearchInfo::Found;
		}
		else {
			return (v < node->value) ? search(v, node->left) : search(v, node->right);
		}

	}

	void preorder(std::unique_ptr<BSTNode>& node) {

		if (!node) {
			return;
		}

		std::cout << node->value << "\t" << std::endl;
		preorder(node->left);
		preorder(node->right);

	}

	void reverse(std::unique_ptr<BSTNode>& node) {

		if (!node) {
			return;
		}

		std::swap(node->left,node->right);
		reverse(node->left);
		reverse(node->right);
	}

	void inorder(std::unique_ptr<BSTNode>& node) {

		if (!node) {
			return;
		}

		inorder(node->left);
		std::cout << node->value << "\t" << std::endl;
		inorder(node->right);

	}

	void posorder(std::unique_ptr<BSTNode>& node) {

		if (!node) {
			return;
		}

		posorder(node->left);
		posorder(node->right);
		std::cout << node->value << "\t" << std::endl;

	}

	void print(std::unique_ptr<BSTNode>& node) {
		if (!node) {
			return;
		}

		print(node->left);
		std::cout << node->value << "\t" << std::endl;
		print(node->right);

	}

};

