

#include <iostream>



using namespace std;

class Node 
{
public:
    int key;
    Node* left;
    Node* right; 

    Node(int k) {
        key = k;
        left = nullptr;
        right = nullptr;
    }

    int getKey() 
    {
        return key;
    }

    Node* getLeft()
    {
        return left;
    }

    Node* getRight()
    {
        return right;
    }

};



bool search(Node* root, int key)
{
    if (root == nullptr || root->getKey() == key) {
        return root != nullptr;
    }

    if (key > root->getKey()) {
        return search(root->getRight(), key);
    }

    return search(root->getLeft(), key);
}
 



int main()
{
    Node* root = Node(10);
    root->left=Node(11);
    root->right=Node(12);

    searh(&root , 3);
    
}
