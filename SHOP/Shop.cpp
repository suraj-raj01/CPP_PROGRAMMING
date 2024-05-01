/*
SHOP_MANAGEMENT SYSTEMS:-
  Data Members:
  ItemId
  ItemName
  ItemPrice
  RemoveData
  Total
  count

Member Functions
  add()
  show()
  CANCEL()
  EXIT()
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
    int remove = 0;

    public:
    void add()
    {
        for(int i=0; i<100; i++)
        {
            cout<<"\nEnter the ItemId: ";
            cin>>ItemId[i];
            cout<<"Enter the ItemName: ";
            cin>>ItemName[i];
            cout<<"Enter the ItemPrice: ";
            cin>>ItemPrice[i];
            char ch;
            cout<<"\n----------------------------\n";
            cout<<"|  Enter A for add Item    |\n|  Enter P for print Bill  |";
            cout<<"\n----------------------------\n";
            cin>>ch;
            count++;
            if(ch=='a' || ch=='A')
            {
                continue;
            }
            else if(ch=='p' || ch=='P'){
                break;
            }
            cout<<"\nPlease enter valid input!!\n\n";
        }
    };

    void show()
    {
       cout<<"\n-----------------------------------------\n";
       cout<<"ItemCode\tItemName\tItemPrice";
       cout<<"\n-----------------------------------------\n";
       for(int i=0; i<count; i++)
       {
          cout<<"  "<<ItemId[i]<<"\t\t"<<ItemName[i]<<"\t\t  "<<ItemPrice[i]<<endl;
          total+=ItemPrice[i];
       }
       cout<<"-----------------------------------------\n";
       cout<<"\nTotal Item: "<<count;
       cout<<"\nRemoved Item: "<<remove;
       cout<<"\nTotal New: "<<count-remove;
       cout<<"\nTotal Bill: "<<total<<endl;
       CANCEL();
    }

    void CANCEL()
    {
        total = 0;
        char cancel;
        cout<<"\n-------------------------------\n";
        cout<<"| Enter Y for Cancel Item     |\n";
        cout<<"| Enter N for Not Cancel Item |";
        cout<<"\n-------------------------------\n";
        cin>>cancel;
        if(cancel=='y'||cancel=='Y')
        {
        int del;
        cout<<"Enter ItemId for Cancel Item: ";
        cin>>del;
        for(int i=0; i<count; i++)
        {
            if(del==ItemId[i])
            {
            ItemId[i] = 0;
            ItemName[i] = "-";
            ItemPrice[i] = 0;
            remove++;
            }
        }
        show();
        }
        else if(cancel=='n' || cancel=='N'){
           EXIT();
        }
        else{
            cout<<"\nPlease enter Valid Operator!!\n";
            CANCEL();
        }
    }
    
    void EXIT()
    {
        char x;
        cout<<"\n----------------------------------\n";
        cout<<"Enter X for exit this Windows\nEnter Y for delete Items\n";
        cout<<"----------------------------------\n";
        cin>>x;
        if (x=='y' || x=='Y')
        {
            CANCEL();
        }
        else
        {
        cout<<"\nThankyou For Visiging!! "<<char(2)<<char(2)<<"\n\n";
        exit;
        }
    }
};

int main()
{
   SHOPING s;
   s.add();
   s.show();
}

