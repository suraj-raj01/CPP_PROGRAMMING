// How to create a node in Singly LinkedList.
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    class node *nxt;
    node(int val)
    {
        data = val;
        nxt = NULL;
    }
};

int main()
{
    node obj(30);
    cout<<"data : "<<obj.data<<endl;
    cout<<"next data : "<<obj.nxt<<endl;
    cout<<"next data address : "<<&obj.nxt;
}