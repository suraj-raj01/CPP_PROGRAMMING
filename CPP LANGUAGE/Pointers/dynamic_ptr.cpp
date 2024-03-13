#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of row: ";
    cin>>r;
    int **arr = new int*[r];
    //create
    for(int i=0; i<r; ++i)
    {
        arr[i] = new int[r];
    }
    //input
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<r; ++j)
        {
            cin>>arr[i][j];
        }
    }

    // output
    cout<<"output is: "<<endl;
        for(int i=0; i<r; ++i)
    {
        for(int j=0; j<r; ++j)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
        delete []arr;
        arr = NULL;
    }
}