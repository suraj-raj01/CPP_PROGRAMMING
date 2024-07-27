// Check tree is identical or not.

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
bool issame(node *root1,node *root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    else if(root1->l==NULL && root2->l!=NULL)
    {
        return false;
    }
    else if(root1->r==NULL && root2->r!=NULL)
    {
        return false;
    }
    else if((root1->l->data==root2->l->data)){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    node *root1 = NULL;
    node *root2 = NULL;
    root1 =  new node(1);
    root1->l=new node(2);
    root1->r=new node(3);

    root2 =  new node(1);
    root2->l=new node(2);
    root2->r=new node(3);
    bool c = issame(root2,root1);
    if(c)
    {
        cout<<"tree are Identical";
    }
    else{
        cout<<"tree are not Identical";
    }
}