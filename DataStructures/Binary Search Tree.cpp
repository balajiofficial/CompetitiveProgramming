#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int data) {
	Node* root = new Node();
	root->data = data;
	root->left = root->right = NULL;
	return root;
}

void insert(Node** root, int data) {
	if (*root == NULL) {
		*root = newNode(data);
	} else if (data < (*root)->data) {
		insert(&((*root)->left), data);
	} else {
		insert(&((*root)->right), data);
	}
}

void printInOrder(Node* root) {
	if (root == NULL) return;
	printInOrder(root->left);
	cout << root->data << " ";	
	printInOrder(root->right);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	Node* root = NULL;
	root = newNode(10);
	insert(&root, 7);
	insert(&root, 15);
	insert(&root, 9);
	insert(&root, 4);
	insert(&root, 12);
	printInOrder(root);
	cout << "\n";
	// The 'set' data structure in c++ is a binary search tree
}
