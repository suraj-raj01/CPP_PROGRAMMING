#include<iostream>
using namespace std;

class SHOP{
    int itemCode;
    string itemName;
    float price;
    float total;
    int count;
    public:
    void add(int itCode, string itName)
    {
       for(int i=0; i<3; i++)
       {
        itemCode+=itCode;
       }
       for(int i=0; i<3; i++)
       {
        itemName+=itName;
       }
       
    }
    void countItem()
    {
        
    }
    void show()
    {

    }
    void cancel()
    {

    }
};

int main()
{
  int item[3];
  for(int i=0; i<3; i++)
  {
    cin>>item[i];
  }
  string itemName[3];
  for(int i=0; i<3; i++)
  {
    cin>>itemName[i];
  }
  SHOP add(item,itemName);
}