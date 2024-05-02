// Pointer questions......

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 45, 7, 8, 6};
    cout << "Value at 0 Loacation: " << 0 [arr] << endl;
    cout << "Similarly Value at 0 loaction: " << arr[0] << endl;
    cout << "Similarly Value at 0 loaction: " << *(0 + arr) << endl;
    cout << arr << endl;  // Address of 0 loaction
    cout << &arr << endl; // Address of 0 loacation

    int *p = &arr[0];
    cout << "Value of 0 Loaction = " << *p << endl;
    p++;
    cout << "Value of 1 loacation = " << *p << endl;
    cout << "Address of arr: " << &arr << endl;
    cout << "Address of p: " << &p << endl;
    cout << p << endl; // Address of 0 location
    p++;
    cout << p << endl; // Address of 1 loaction

    // in a symbol table mapping of pointer is stored

    char *c;
    float *k;
    double *d;
    char g;
    cout << "Size of g = " << sizeof(g) << endl;
    cout << "Pointer take 4 byte address of g " << sizeof(&g) << endl;
    cout << "Value of array name *c " << sizeof(c) << endl;
    cout << "Value of array name c " << sizeof(*c) << endl;
    cout << "Pointer take 4 byte address of c " << sizeof(&c) << endl;
    cout << "Pointer take 4 byte address of k " << sizeof(&k) << endl;
    cout << "pointer take 4 byte address of d " << sizeof(&d) << endl;
    cout << "Value of array name c " << sizeof(&arr) << endl;
    cout << "Value of 0 location " << *arr << endl;
    cout << "updated value of 0 location " << *arr + 100 << endl;
    cout << "Value of 1 location " << *(arr + 1) << endl;
    cout << "updated value of 1 loaction " << *(arr + 1) + 1000 << endl;
    cout << "Value of 2 loaction: " << *(arr + 1 + 1) << endl;
    cout << "updated value of 2 location " << *(arr + 1 + 1) + 1000 << endl;
}