/*
20. Write a  program to input electricity unit charges and calculate total electricity bill 
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<iostream>
using namespace std;
int main()
{
    float unit,bill,exbill;
    cout<<"Enter the units: ";
    cin>>unit;
    if(unit>0 && unit<=50)
    {
        bill = unit*0.5;
    }
    else if(unit>50 && unit <=100)
    {
        bill = unit*0.75;
    }
    else if(unit>100 && unit<250)
    {
        bill = unit*1.20;
    }
    else{
        bill = unit*1.50;
    }
    cout<<"Bill : "<<bill<<"$"<<endl;
    exbill = (bill*0.20);
    cout<<"Extra 20% charge : "<<exbill<<"$"<<endl;
    cout<<"Total Bill : "<<bill+exbill<<"$";
}

/*
Enter the units: 130
Bill : 156$
Extra 20% charge : 31.2$
Total Bill : 187.2$

OR,

Enter the units: 260
Bill : 390$
Extra 20% charge : 78$
Total Bill : 468$
*/