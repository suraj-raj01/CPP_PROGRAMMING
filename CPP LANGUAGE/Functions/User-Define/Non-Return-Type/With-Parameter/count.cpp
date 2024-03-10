/*
WAP to enter the numbers till the user wants and at the end it should display
the count of positive, negative and zeros how many times entered.
*/

#include<iostream>
using namespace std;
int main()
{
    int positive = 0;
    int negative = 0;
    int zeros = 0;
    int n;
    cout<<"==============================================\n";
    cout<<"Game Rules:- Enter the numbers till user wants\nand at the end it should display the count\nof positive, negative and zeros entered\n";
    cout<<"==============================================\n";
    cout<<"Choose an Option\n";
    cout<<"1. Continue\n0. Stop\n";
    cin>>n;
    while(n==1)
    {
        int num;
        cout<<"Enter your number: ";
        cin>>num;
        if(num<0)
        {
            negative++;
        }
        else if(num>0)
        {
            positive++;
        }
        else
        {
            zeros++;
        }
            cout<<"Choose an Option\n";
            cout<<"1. Continue\n0. Stop\n";
            cin>>n;
    }
    cout<<"Positive = "<<positive<<"\n";
    cout<<"Negative = "<<negative<<"\n";
    cout<<"Zeros = "<<zeros<<"\n";
}
