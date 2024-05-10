/*
16. Write a  program to check whether the triangle is equilateral, isosceles or scalene triangle.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first side: ";
    cin>>a;
    cout<<"Enter the second side: ";
    cin>>b;
    cout<<"Enter the third side: ";
    cin>>c;
    if(a==b==c)
    {
        cout<<"Triangle is equuilateral!!";
    }
    else if(a==b || a==c || b==c){
        cout<<"Triangle is isosceles!!";
    }
    else{
        cout<<"Triangle is scalene!!";
    }
}

/*
Enter the first side: 20
Enter the second side: 20
Enter the third side: 20
Triangle is isosceles!!
OR,
Enter the first side: 10
Enter the second side: 30
Enter the third side: 10
Triangle is isosceles!!
OR,
Enter the first side: 10
Enter the second side: 11
Enter the third side: 12
Triangle is scalene!!
*/