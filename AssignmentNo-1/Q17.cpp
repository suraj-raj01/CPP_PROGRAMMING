/*
17. Write a  program to calculate profit or loss.
*/

#include<iostream>
using namespace std;
int main()
{
    int cp,sp,profit,loss;
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<"Enter the sell price: ";
    cin>>sp;
    if(sp>cp)
    {
        profit = sp-cp;
        cout<<"Profit : "<<profit;
    }
    else if(cp>sp)
    {
        loss = cp - sp;
        cout<<"Loss : "<<loss;
    }
    else{
        cout<<"No loss No profit!!";
    }
}

/*
Enter the cost price: 200
Enter the sell price: 250
Profit : 50
OR,
Enter the cost price: 200
Enter the sell price: 180
Loss : 20
OR,
Enter the cost price: 50
Enter the sell price: 50
No loss No profit!!
*/