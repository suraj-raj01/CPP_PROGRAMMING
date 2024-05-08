// WAP to display table  using virtual function?

#include<iostream>
using namespace std;

class Table{
    public:
    virtual void table(int n)
    {
        for(int i=1; i<=10; i++)
        {
            cout<<n*i<<"\n";
        }
    }
};
class PrintTable:public Table{
    public:
    virtual void printTable(int n)
    {
        for(int i=1; i<=10; i++)
        {
            cout<<n*i<<"\n";
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number to print their Table: ";
    cin>>n;
    Table *t = new PrintTable;
    t->table(n);

    //OR
    // Table t1;
    // t1.table(n);
}