// WAP to print the even number from the given range using function

#include<iostream>
using namespace std;

void print_even(int start, int end)
{
    for(start; start<=end; ++start)
    {
        if(start%2 == 0)
        {
            cout<<start;
            if(start<end-1)
            {
                cout<<",";
            }
        }
    }
}

int main()
{
    int start,end;
    cout<<"Enter the start point: ";
    cin>>start;
    cout<<"Enter the end point: ";
    cin>>end;
    print_even(start,end);
}
