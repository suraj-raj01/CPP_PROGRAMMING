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
int main()
{
    node *root1 = NULL;
    node *root2 = NULL;
    root1 =  new node(1);
}