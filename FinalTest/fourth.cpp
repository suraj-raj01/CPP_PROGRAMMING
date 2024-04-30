/*
Q.4 Write a Program using class to process Shopping List for a Departmental Store. 
The list include details such as the Code No and Price of each item and perform the 
operations like Adding, Deleting Items to the list and Printing the Total value of a 
Order.
*/

#include<iostream>
using namespace std;

class SHOPPING
{
    int ItemCode[100];
    float price[100];
    int count = 0;
    int total = 0;
    public:
    void add()
    {
        for(int i=0; i<100; i++)
        {
            cout<<"Enter the ItemCode: ";
            cin>>ItemCode[i];
            cout<<"Enter the Price: ";
            cin>>price[i];
            int n;
            cout<<"Enter 1 for add and 0 for generate Bill: ";
            cin>>n;
            count++;
            if(n==1)
            {
                continue;
            }
            else{
                break;
            }
        }
    }
    void show()
    {
        cout<<"\n\nItemCode\tPrice\n";
        for(int i=0; i<count; i++)
        {
            cout<<ItemCode[i]<<"\t\t"<<price[i]<<endl;
            total += price[i];
        }
        cout<<"\nTotal Price: "<<total<<endl;
    }
    void Delete()
    {
        total = 0;
        int del;
        cout<<"\nEnter the ItemCode to delete: ";
        cin>>del;
        for(int i=0; i<count; i++)
        {
            if(del==ItemCode[i])
            {
                ItemCode[i]=0;
                price[i]=0;
            }
        }
    }
};

int main()
{
SHOPPING s;
s.add();
s.show();
s.Delete();
s.show();
}