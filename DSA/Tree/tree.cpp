#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *left,*right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *create(node *root)
{
    int x;
    cout<<"Enter value: ";
    cin>>x;
    root = new node(x);
    if(x==-10)
    {
        return NULL;
    }
    cout<<"Enter value for left node "<<x<<"\n";
    root->left=create(root->left);
    cout<<"Enter value for right node "<<x<<"\n";
    root->right=create(root->right);
    return root;
}
// Pre Order Traversal.
void pre(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"\t";
    pre(root->left);
    pre(root->right);
}

int main()
{
    node *root = NULL;
    root = create(root);
    pre(root);
}

// WAP to count the leaf node
// WAP to create a binary search tree