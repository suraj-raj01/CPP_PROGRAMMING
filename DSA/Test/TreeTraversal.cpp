// Tree Traversal (pre-order, In-order,PostOrder).

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
    cout<<"Enter the value: ";
    root = new Node(x);
    if(x==-10)
    {
        return NULL;
    }
    cout<<"Enter value for left Node: "<<x<<"\n";
    root->left = create(root->left);
    cout<<"Enter the value fo right Node: "<<x<<"\n";
    root->right = create(root->right); 
    return root;
}
void PreOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"\t";
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    PreOrder(root->left);
    cout<<root->data<<"\t";
    PreOrder(root->right);
}
void PostOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    PreOrder(root->left);
    PreOrder(root->right);
    cout<<root->data<<"\t";
}
int main()
{
    Node *root = NULL;
    root = create(root);
    cout<<"Pre-Order:\n";
    PreOrder(root);
    cout<<"\nIn-Order:\n";
    InOrder(root);
    cout<<"\nPost-Order:\n";
    PostOrder(root);
}