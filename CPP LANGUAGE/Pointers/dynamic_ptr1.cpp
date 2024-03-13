#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of row: ";
    cin>>r;
    cout<<"Enter the number of col: ";
    cin>>c;
    int **arr = new int*[r];
    //create
    for(int i=0; i<r; ++i)
    {
        arr[i] = new int[c];
    }
    //input
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cin>>arr[i][j];
        }
    }

    // output
    cout<<"output is: "<<endl;
        for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
        delete[]arr;
        arr = NULL;
    }
}