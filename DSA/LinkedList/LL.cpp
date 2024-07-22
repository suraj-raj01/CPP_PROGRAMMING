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
class LinkedList{
    public:
    node *head;
    LinkedList()
    {
        this->head = NULL;
    }
    void insertFront(int x)
    {
     node *newNode = new node(x);
     newNode->nxt = head;
     head = newNode;
    }
    void insertBack(int y)
    {
        node *newNode = new node(y);
        if(head==NULL)
        {
            head  = newNode;
            return;
        }
        node *temp = head;
        while(temp->nxt!=NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = newNode;
    }

  void deleteAtBeginning() {  
    if (head == nullptr) {  
      return;  
    }  
    node *temp = head;  
    head = head->nxt;  
    delete temp;  
  }  

  void deleteAtEnd() {  
  if (head == nullptr) {  
    return;  
  }  
  if (head->nxt == nullptr) {  
    delete head;  
    head = nullptr;  
    return;  
  }  
  node *temp = head;  
  while (temp->nxt->nxt != nullptr) {  
    temp = temp->nxt;  
  }  
  delete temp->nxt;  
  temp->nxt = nullptr;  
}  

    void show()
    {
        node *temp = head;
        while (temp!=NULL)  
        {
            cout<<temp->data<<"    ";
            temp=temp->nxt;
        }
        cout<<endl;
    }
};

int main()
{
    // node obj(30);
    // cout<<"data : "<<obj.data<<endl;
    // cout<<"nxt data : "<<obj.nxt<<endl;
    // cout<<"nxt data address : "<<&obj.nxt;
    LinkedList l;
    l.insertFront(10);
    l.insertFront(20);
    l.insertFront(30);
    l.insertFront(40);
    l.insertFront(50);
    l.insertBack(60);
    l.insertBack(70);
    cout<<"Original data: \n";
    l.show();
    l.deleteAtBeginning();
    cout<<"After Delete data from begning: \n";
    l.show();
    l.deleteAtEnd();
    cout<<"After Delete data from ending: \n";
    l.show();
}