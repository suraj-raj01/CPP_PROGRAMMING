/*
13. Write a  program to count total number of notes in given amount.
*/

#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int hun = amount/100;
    int fifty = amount%100/50;
    int twenty = amount%100%50/20;
    int ten = amount%100%50%20/10;
    int five = amount%100%50%20%10/5;
    int two = amount%100%50%20%10%5/2;
    int one = amount%100%50%20%10%5%2/1;
    cout<<"Notes of 100: "<<hun<<endl;
    cout<<"Notes of 50: "<<fifty<<endl;
    cout<<"Notes of 20: "<<twenty<<endl;
    cout<<"Notes of 10: "<<ten<<endl;
    cout<<"Notes of 5: "<<five<<endl;
    cout<<"Notes of 2: "<<two<<endl;
    cout<<"Notes of 1: "<<one<<endl;
    cout<<"Total number of notes: "<<hun+fifty+twenty+ten+five+two+one;
}

/*
Enter the amount: 1388
Notes of 100: 13
Notes of 50: 1
Notes of 20: 1
Notes of 10: 1
Notes of 5: 1
Notes of 2: 1
Notes of 1: 1
Total number of notes: 19
*/