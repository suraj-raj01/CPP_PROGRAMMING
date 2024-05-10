/*
18. Write a  program to input marks of five subjects Physics, Chemistry, Biology, Mathematics 
and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include<iostream>
using namespace std;
int main()
{
    float phy,chem,bio,maths,comp;
    cout<<"Enter the marks of physics : ";
    cin>>phy;
    cout<<"Enter the marks of chemistry : ";
    cin>>chem;
    cout<<"Enter the marks of Biology : ";
    cin>>bio;
    cout<<"Enter the marks of Mathematics : ";
    cin>>maths;
    cout<<"Enter the marks of Computer : ";
    cin>>comp;

    float perc = ((phy+chem+bio+maths+comp)/5);
    cout<<"percentage: "<<perc<<endl;

    if(perc>=90 && perc<=100)
    {
        cout<<"Grade A";
    }
    else if(perc>=80 && perc<90)
    {
        cout<<"Grade B";
    }
    else if(perc>=70 && perc<80)
    {
        cout<<"Grade C";
    }
    else if(perc>=60 && perc<70)
    {
        cout<<"Grade D";
    }
    else if(perc>=40 && perc<60)
    {
        cout<<"Grade E";
    }
    else{
        cout<<"Grade F";
    }

}

/*
Enter the marks of physics : 60
Enter the marks of chemistry : 80
Enter the marks of Biology : 90
Enter the marks of Mathematics : 74
Enter the marks of Computer : 68
percentage: 74.4
Grade C

OR,

Enter the marks of physics : 40
Enter the marks of chemistry : 30
Enter the marks of Biology : 36
Enter the marks of Mathematics : 38
Enter the marks of Computer : 37
percentage: 36.2
Grade F
*/