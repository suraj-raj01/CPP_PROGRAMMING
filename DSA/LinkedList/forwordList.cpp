// Forword LinkedList.
#include<iostream>
using namespace std;
#include<forward_list>
int main()
{
    // Using STL
    forward_list<int>node;
    node.push_front(10);
    node.push_front(20);
    node.push_front(30);
    node.push_front(40);
    node.push_front(50);
    node.pop_front();
    for(auto k:node)
    {
        cout<<k<<" ";
    }
    // 50 40 30 20 10 
    cout<<"\n";
    forward_list<int>node1{10,20,30,40,50};
    node1.pop_front();
    // node1.clear();   // Clear All Data
    for(auto k:node1)
    {
        cout<<k<<" ";
    }
    // 10 20 30 40 50 
}