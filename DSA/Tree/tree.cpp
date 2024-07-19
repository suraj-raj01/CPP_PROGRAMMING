#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    class Node *left,*right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node *create(Node *root)
{
    int x;
    cout<<"Enter value: ";
    cin>>x;
    root = new Node(x);
    if(x==-10)
    {
        return NULL;
    }
    cout<<"Enter value for left Node "<<x<<"\n";
    root->left=create(root->left);
    cout<<"Enter value for right Node "<<x<<"\n";
    root->right=create(root->right);
    return root;
}
// Pre Order Traversal.
void pre(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"  ";
    pre(root->left);
    pre(root->right);
}
// Inorder Traversal

void inOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<"  ";
    inOrder(root->right);
}
void PostOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<"  ";
}

int main()
{
    Node *root = NULL;
    root = create(root);
    cout<<"Pre Order Tree Traversal\n";
    pre(root);
    cout<<"\nIn-Order Tree Traversal\n";
    inOrder(root);
    cout<<"\nPost-Order Tree Traversal\n";
    PostOrder(root);
}

// WAP to count the leaf Node
// WAP to create a binary search tree