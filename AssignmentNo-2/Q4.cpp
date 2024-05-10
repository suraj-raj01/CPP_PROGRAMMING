/*
4. Write a  program to print all even numbers between 1 to 100. – using while loop
*/

#include<iostream>
using namespace std;
int main()
{
    int n = 1;
    while(n<=100)
    {
        if(n%2==0)
        {
            cout<<n<<" ";
        }
        n++;
    }
}

/*
2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 
*/