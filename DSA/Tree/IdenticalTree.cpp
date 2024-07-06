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
bool issame(node *r1,node *r2)
{
    if(r1==NULL && r2==NULL)
    {
        return true;
    }
    else if(r1->l==NULL && r2->l!=NULL)
    {
        return false;
    }
    else if(r1->r==NULL && r2->r!=NULL)
    {
        return false;
    }
    else if((r1->l->data==r2->l->data)){
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