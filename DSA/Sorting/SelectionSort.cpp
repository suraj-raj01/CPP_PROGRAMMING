/*
Selection Sort :-
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {8,6,1,4,2,7,5,3};
//     int temp,chhotu;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Array Before Applying Bubble Sort: \n";
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<"\t";
//     }

//     for(int i=0; i<size; i++)
//     {
//         chhotu = i;
//         for(int j=i; j<size; j++)
//         {
//             if(arr[chhotu]>arr[j])
//             {
//                 chhotu = j;
//             }
//         }
//         if(arr[chhotu]!=arr[i])
//         {
//             temp = arr[i];
//             arr[i] = arr[chhotu];
//             arr[chhotu] = temp;
//         }
//     }
//     cout<<"\nAfter applying Bubble Sort: \n";
//     for(int j=0; j<size; j++)
//     {
//         cout<<arr[j]<<"\t";
//     }
// }



#include<iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    cout<<"Before using Selection Sort!!\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }

    int temp,chhotu;
    for(int i=0; i<size; i++)
    {
        chhotu = i;
        for(int j=i; j<size; j++)
        {
            if(arr[chhotu]>arr[j])
            {
                chhotu = j;
            }
        }
        if(arr[chhotu]!=arr[i])
        {
            temp = arr[i];
            arr[i] = arr[chhotu];
            arr[chhotu] = temp;
        }
    }
    cout<<"\nAfter using Selection Sort\n";
    for(int j=0; j<size; j++)
    {
        cout<<arr[j]<<"\t";
    }
}

int main()
{
int size; 
cout<<"Enter the size of arr: ";
cin>>size;
cout<<"Enter the elements: ";
int arr[size];
for(int i=0; i<size; i++)
{
    cin>>arr[i];
}
selectionSort(arr,size);
}