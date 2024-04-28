#include <iostream>
using namespace std;

class SHOP
{
    int itemCode[100];
    string itemName[100];
    float price[100];
    float total = 0;
    int count = 0;

public:
    void add()
    {
        for (int i = 0; i < 100; i++)
        {
            cout << "Enter the itemCode: ";
            cin >> itemCode[i];
            cout << "Enter the itemName: ";
            cin >> itemName[i];
            cout << "Enter the price: ";
            cin >> price[i];
            int n;
            cout << "\n=======================\n";
            cout << "Enter 1 for add item\nEnter 0 for Bill: \n";
            cout << "=======================\n\n";
            cin >> n;
            count++;
            if (n == 1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }
    void show()
    {
        cout << "\n\n";
        cout << "======================================\n";
        cout << "ItemCode\tItemName\tPrice\n";
        cout << "======================================\n";
        for (int i = 0; i < count; i++)
        {
            cout << itemCode[i] << "\t\t " << itemName[i] << "\t\t " << price[i] << endl;
            total += price[i];
        }
        cout << "======================================\n";
        cout << "\n"
             << "Total Bill: " << total << endl;
    }
    void countItem()
    {
        cout << "\n";
        cout << "Total number of item: " << count << endl;
    }
    void cancel()
    {
        total = 0;
        int opr;
        cout << "\n\nEnter 1 for cancel\nEnter 0 for not cancel\n";
        cin >> opr;
        if (opr == 1)
        {
            int iCode;
            cout << "Enter the itemCode for cancel: ";
            cin >> iCode;
            for (int i = 0; i < count; i++)
            {
                if (itemCode[i] == iCode)
                {
                    itemCode[i] = 0;
                    itemName[i] = "-";
                    price[i] = 0;
                }
            }
        }
        else if (opr == 0)
        {
            exit;
        }
    }
};

int main()
{
    SHOP s;
    s.add();
    s.show();
    s.countItem();
    s.cancel();
    s.show();
}