/*
Merge Sort: 
Time Complexity:
    a)BestCase : O(nlog(n));
    b)AverageCase : O(nlog(n));
    c)WorstCase : O(nlog(n));
*/

// #include<iostream>
// using namespace std;

// // subarray implementation
// void merge(int A[],int low, int mid, int high)
// {
//     int i,j,k,B[high+1];
//     i=low;
//     j=mid+1;
//     k=low;
//     while(i<=mid && j<=high)
//     {
//         if(A[i]<A[j])
//         {
//             B[k] = A[i];
//             i++;
//         }
//         else{
//             B[k]=A[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<=mid)
//     {
//         B[k]=A[i];
//         k++;
//         i++;
//     }
//     while(j<=high)
//     {
//         B[k]=A[j];
//         k++;
//         j++;
//     }
//     for(i=low; i<=high; i++)
//     {
//         A[i]=B[i];
//     }
// }
// // Merge Sort implimentation
// void msort(int A[],int low, int high)
// {
//     int mid;
//     if(low<high)
//     {
//         mid = (low+high)/2;
//         msort(A,low,mid);
//         msort(A,mid+1,high);
//         merge(A,low,mid,high);
//     }
// }
// // print Array
// void printArr(int A[],int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<A[i]<<"  ";
//     }
//     cout<<"\n";
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of an array: ";
//     cin>>n;
//     int A[n];
//     cout<<"Enter "<<n<<" elements: ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>A[i];
//     }
//     printArr(A,n);
//     msort(A,0,n-1);
//     cout<<"After Sorting\n";
//     printArr(A,n);
// }

#include<iostream>
using namespace std;

void msort(int *arr, int low,int mid, int high)
{
    int i,j,k,B[high+1];
    i = low;
    j = mid+1;
    k = low;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else{
            B[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for(int i=low; i<=high; i++)
    {
        arr[i] = B[i];
    }
}


void MS(int *arr, int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        MS(arr,low,mid);
        MS(arr,mid+1, high);
        msort(arr,low,mid,high);
    }
}

void print(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    print(arr,size);
    MS(arr,0,size-1);
    print(arr,size);
    return 0;
}