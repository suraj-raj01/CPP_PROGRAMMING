#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *l,*r;
    node(int d){
        data = d;
        l = NULL;
        r = NULL;
    }
};
node *bst(node *root, int v)
{
    if(root==NULL){
        return new node(v);
    }
    if(v<root->data)
    {
        root->l = bst(root->l,v);
    }
    else if(v>root->data)
    {
        root->r = bst(root->r,v);
    }
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->l);
    cout<<root->data<<"   ";
    inorder(root->r);
}
void PreOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"   ";
    inorder(root->l);
    inorder(root->r);
}
void PostOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->l);
    inorder(root->r);
    cout<<root->data<<"   ";
}
int main()
{
    node *root = NULL;
    root = bst(root,50);
    root = bst(root,40);
    root = bst(root,70);
    root = bst(root,30);
    root = bst(root,90);
    root = bst(root,60);
    root = bst(root,80);
    cout<<"PreOrder:\n";
    PreOrder(root);
    cout<<"\nInOrder:\n";
    inorder(root);
    cout<<"\nPostOrder:\n";
    PostOrder(root);
}