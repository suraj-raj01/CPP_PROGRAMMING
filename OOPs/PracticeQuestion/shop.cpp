/*

Class SHOP
DATA MEMBERS:
  ITEMCODE
  ITEMNAME
  PRICE
  TOTAL
  COUNT
MEMBER FUNCTION:
  ADD()
  SHOW()
  COUNTITEM()
  CANCEL()

*/

#include <iostream>
using namespace std;

class SHOP
{
  int itemCode[10];
  string itemName[10];
  int price[10];
  int total = 0;
  int count;

public:
  void add(int i_Code[], string i_Name[], int prc[], int itemNum)
  {
    // item code
    for (int i = 0; i < itemNum; i++)
    {
      itemCode[i] = i_Code[i];
    }
    // item name
    for (int i = 0; i < itemNum; i++)
    {
      itemName[i] = i_Name[i];
    }
    // price
    for (int i = 0; i < itemNum; i++)
    {
      price[i] = prc[i];
    }
  }
  void show(int itemNum)
  {
    cout << "ITEM CODE: \n";
    for (int i = 0; i < itemNum; i++)
    {
      cout << itemCode[i] << "\t";
    }

    cout << "\nITEM NAME:\n";
    for (int i = 0; i < itemNum; i++)
    {
      cout << itemName[i] << "\t";
    }

    cout << "\nITEM PRICE:\n";
    for (int i = 0; i < itemNum; i++)
    {
      cout << price[i] << "\t";
    }
  }
  void countItem(int itemNum)
  {
    for (int i = 0; i < itemNum; i++)
    {
      total += price[i];
    }
    cout << "\nTotal Price: " << total << endl;
  }
  void cancel(int canc, int itemNum)
  {
    for (int i = 0; i < itemNum; i++)
    {
      if (itemCode[i] == canc)
      {
        cout << "item " << itemCode[i] << " delete successfully!!";
      }
      else if (itemCode[i] == 0)
      {
        exit;
      }
    }
  }
};

int main()
{
  int itemNum;
  cout << "Enter the number of item: ";
  cin >> itemNum;
  int itemCode[itemNum];
  cout << "Enter itemCode: \n";
  for (int i = 0; i < itemNum; i++)
  {
    cin >> itemCode[i];
  }
  string itemName[itemNum];
  cout << "Enter the item name: \n";
  for (int i = 0; i < itemNum; i++)
  {
    cin >> itemName[i];
  }
  int price[itemNum];
  cout << "Enter the price: \n";
  for (int i = 0; i < itemNum; i++)
  {
    cin >> price[i];
  }
  SHOP s;
  s.add(itemCode, itemName, price, itemNum);
  s.show(itemNum);
  s.countItem(itemNum);
  int cancel;
  cout << "Enter the item code for cancel & 0 for not cancel: \n";
  cin >> cancel;
  s.cancel(cancel, itemNum);
}