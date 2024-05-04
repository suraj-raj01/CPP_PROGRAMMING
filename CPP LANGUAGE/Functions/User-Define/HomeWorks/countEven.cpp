/*
WAP to count even number from an array, pass array as an argument into the
function.
*/

#include <iostream>
using namespace std;
int count(int arr[], int size)
{
   int count = 0;
   for (int i = 0; i < size; i++)
   {
      if (arr[i] % 2 == 0)
      {
         count++;
      }
   }
   return count;
}
int main()
{
   int n;
   cout << "Enter the size of arr: ";
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int size = sizeof(arr) / sizeof(arr[0]);
   cout << "There are " << count(arr, size) << " even number in this array";
}