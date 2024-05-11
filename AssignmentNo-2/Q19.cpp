/*
19. Write a program to enter a number and print it in words.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num=0;

    while (n!=0)
    {
        num = (num*10) + (n%10);
        n/=10;
    }
    

    while(num!=0)
    {
        switch (num%10)
        {
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"Four";
            break;
        case 5:
            cout<<"Five";
            break;
        case 6:
            cout<<"Six";
            break;
        case 7:
            cout<<"Seven";
            break;
        case 8:
            cout<<"Eight";
            break;
        case 9:
            cout<<"Nine";
            break;
        
        default:
            cout<<"Zero";
            break;
        }
        num=num/10;
    }
}

/*
Enter the number: 2346
TwoThreeFourSix
*/