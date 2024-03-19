#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int k = sizeof(a) / sizeof(a[0]);
    cout << "Stored value   ";
    for (int i = 0; i < k; i++)
    {
        if(a[i]%2!=0)
        {
            cout << a[i] << "\t";
        }
    }
    return 0;
}
