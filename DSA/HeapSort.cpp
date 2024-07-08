// HEAP SORT
/*
50,2,9,4,5,51

        50
     2      9
  4    5  51
------------------------
       50
    5      51
  2   4  9

------------------------
50,5,51,2,4,9
*/

#include<iostream>
using namespace std;

class heaps{
    int arr[10];
    int s, index;
    public:
    heaps()
    {
        s=0;
    }
    void maxhp(int d)
    {
        s = s+1;
        index = s;
        arr[index] = d;
        while(index>1)
        {
            int parent = index/2;
            if(arr[parent]<arr[index])
            //if(arr[parent]>arr[index]) // for mean heap
            {
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void show()
    {
        for(int i=1; i<=s; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};

int main()
{
    heaps h;
    h.maxhp(50);
    h.maxhp(2);
    h.maxhp(9);
    h.maxhp(4);
    h.maxhp(5);
    h.maxhp(51);
    h.show();
}