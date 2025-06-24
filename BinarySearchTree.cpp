#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Construktor for the node class
    Node()
    {
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initialize ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        // step 1: Allocate memory for the new node
        Node * newNode = new Node;

        // step 2: assign value to the data field of the new node
        newNode->info = x;

        // step 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4: locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currenNode = nullptr;
        search(x, parent, currenNode);


};