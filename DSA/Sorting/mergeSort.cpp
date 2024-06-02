/*
Merge Sort: 
Time Complexity:
    a)BestCase : O(nlog(n));
    b)AverageCase : O(nlog(n));
    c)WorstCase : O(nlog(n));
*/

#include<iostream>
using namespace std;

// subarray implementation
void merge(int A[],int low, int mid, int high)
{
    int i,j,k,B[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            B[k] = A[i];
            i++;
        }
        else{
            B[k]=A[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        B[k]=A[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        B[k]=A[j];
        k++;
        j++;
    }
    for(i=low; i<=high; i++)
    {
        A[i]=B[i];
    }
}
// Merge Sort implimentation
void msort(int A[],int low, int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        msort(A,low,mid);
        msort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}
// print Array
void printArr(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<"  ";
    }
    cout<<"\n";
}

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    printArr(A,n);
    msort(A,0,n-1);
    cout<<"After Sorting\n";
    printArr(A,n);
}