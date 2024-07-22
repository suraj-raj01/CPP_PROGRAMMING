// Tree Traversal (pre-order, In-order, PostOrder, HeightOfTree, LeafNode).

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
    cin>>x;
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
    InOrder(root->left);
    cout<<root->data<<"\t";
    InOrder(root->right);
}
void PostOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<"\t";
}
// Height of tree
int maxHeight(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }else{
    int lDepth = maxHeight(root->left);
    int rDepth = maxHeight(root->right);
    if(lDepth>rDepth)
    {
        return lDepth+1;
    }
    else{
        return rDepth+1;
    }
    }
}
void printLeafNodes(Node *root)
{
    // if node is null, return
    if (root==NULL)
        return;
     
    // if node is leaf node, print its data    
    if (!root->left && !root->right)
    {
        cout << root->data << "\t"; 
        return;
    }
 
    // if left child exists, check for leaf 
    // recursively
    if (root->left)
       printLeafNodes(root->left);
         
    // if right child exists, check for leaf 
    // recursively
    if (root->right)
       printLeafNodes(root->right);
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
    cout<<"\nMax height: "<<maxHeight(root);
    cout<<"\nLeaf nodes: \n";
    printLeafNodes(root);
}


/*
Enter the value: 1
Enter value for left Node: 1
Enter the value: 3
Enter value for left Node: 3
Enter the value: 4
Enter value for left Node: 4
Enter the value: -10
Enter the value fo right Node: 4
Enter the value: -10
Enter the value fo right Node: 3
Enter the value: 5
Enter value for left Node: 5
Enter the value: -10
Enter the value fo right Node: 5
Enter the value: -10
Enter the value fo right Node: 1
Enter the value: 2
Enter value for left Node: 2
Enter the value: -10
Enter the value fo right Node: 2
Enter the value: -10
Pre-Order:
1       3       4       5       2
In-Order:
4       3       5       1       2
Post-Order:
4       5       3       2       1
Max height: 3
Leaf nodes:
4       5       2
*/