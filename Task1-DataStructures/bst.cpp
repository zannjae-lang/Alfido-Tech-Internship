#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class BST {
private:

    Node* insert(Node* root, int val) {

        if (root == nullptr)
            return new Node(val);

        if (val < root->data)
            root->left = insert(root->left, val);
        else
            root->right = insert(root->right, val);

        return root;
    }

    bool search(Node* root, int val) {

        if (root == nullptr)
            return false;

        if (root->data == val)
            return true;

        if (val < root->data)
            return search(root->left, val);

        return search(root->right, val);
    }

    void inorder(Node* root) {

        if (!root)
            return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

public:
    Node* root;

    BST() {
        root = nullptr;
    }

    void insertValue(int val) {
        root = insert(root, val);
    }

    bool searchValue(int val) {
        return search(root, val);
    }

    void display() {
        inorder(root);
        cout << endl;
    }
};

int main() {

    BST tree;

    tree.insertValue(50);
    tree.insertValue(30);
    tree.insertValue(70);
    tree.insertValue(20);
    tree.insertValue(40);

    cout << "Inorder Traversal: ";
    tree.display();

    cout << "Search 40: "
         << (tree.searchValue(40) ? "Found" : "Not Found")
         << endl;

    return 0;
}