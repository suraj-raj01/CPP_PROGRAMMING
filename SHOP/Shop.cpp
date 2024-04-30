/*
SHOP_MANAGEMENT SYSTEMS:-
Data Members:
ItemId
ItemName
ItemPrice
Total
count

Member Functions
add()
calculat()
show()
delet()
*/

#include<iostream>
using namespace std;

class SHOPING
{
    int ItemId[100];
    string ItemName[100];
    int ItemPrice[100];
    int total = 0;
    int count = 0;

    public:
    void add()
    {
        for(int i=0; i<100; i++)
        {
            cout<<"Enter the ItemId: ";
            cin>>ItemId[i];
            cout<<"Enter the ItemName: ";
            cin>>ItemName[i];
            cout<<"Enter the ItemPrice: ";
            cin>>ItemPrice[i];
            char ch;
            cout<<"\n----------------------------\n";
            cout<<"|  Enter A for add Item    |\n|  Enter P for print Bill: |";
            cout<<"\n----------------------------\n";
            cin>>ch;
            count++;
            if(ch=='a' || ch=='A')
            {
                continue;
            }
            else{
                break;
            }
        }
    };

    void show()
    {
       cout<<"\n-----------------------------------------\n";
       cout<<"ItemCode\tItemName\tItemPrice";
       cout<<"\n-----------------------------------------\n";
       for(int i=0; i<count; i++)
       {
          cout<<ItemId[i]<<"\t\t "<<ItemName[i]<<"\t\t "<<ItemPrice[i]<<endl;
          total+=ItemPrice[i];
       }
       cout<<"-----------------------------------------\n";
       cout<<"\nTotal Item: "<<count;
       cout<<"\nTotal Bill: "<<total<<endl;
    }

    void CANCEL()
    {
        total = 0;
        char cancel;
        cout<<"\n--------------------------\n";
        cout<<"Enter Y for Cancel Item\n";
        cout<<"Enter N for Not Cancel Item";
        cout<<"\n--------------------------\n";
        cin>>cancel;
        if(cancel=='y'||cancel=='Y')
        {
        int del;
        cout<<"Enter the ItemId: ";
        cin>>del;
        for(int i=0; i<count; i++)
        {
            if(ItemId[i]==del)
            ItemId[i] = 0;
            ItemName[i] = "?";
            ItemPrice[i] = 0;
            total = 0;
        }
        }
        else{
        }
    }
};

int main()
{
   SHOPING s;
   s.add();
   s.show();
   s.CANCEL();
   s.show();
}

