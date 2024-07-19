// MaxHeap Tree

#include<iostream>
using namespace std;

class Heap{
    int arr[10];
    int size,index;
    public:
    Heap()
    {
        size = 0;
    }
    void maxhp(int d)
    {
        size+=1;
        index = size;
        arr[index] = d;
        while(index>1)
        {
            int parent = index/2;
            if(arr[parent]<arr[index])
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
        for(int i=1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Heap p;
    p.maxhp(50);
    p.maxhp(2);
    p.maxhp(9);
    p.maxhp(4);
    p.maxhp(5);
    p.maxhp(51);
    p.show();
}