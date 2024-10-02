// WAP to convert digit to numbers

#include <iostream>
using namespace std;

void nToStr(int p, string str[])
{
    if (p == 0)
    {
        return;
    }
    int d = p % 10;
    p = p / 10;
    nToStr(p, str);
    cout << str[d];
}

int main()
{
    int p;
    string str[10] = {"Zero ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
    cout << "enter number: ";
    cin >> p;
    nToStr(p, str);
}