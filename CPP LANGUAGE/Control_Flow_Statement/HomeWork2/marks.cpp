// WAP to print first, second, third division and fail according to their marks.

#include <iostream>
using namespace std;
int main()
{
    int math, chem, phy, hin, eng;
    cout << "Enter the math marks: ";
    cin >> math;
    cout << "Enter the chemistery marks: ";
    cin >> chem;
    cout << "Enter the physics marks: ";
    cin >> phy;
    cout << "Enter the Hindi marks: ";
    cin >> hin;
    cout << "Enter the English marks: ";
    cin >> eng;
    int total = math + chem + phy + hin + eng;
    float perc = (math + chem + phy + hin + eng) / 5;
    cout << "Total Marks: " << total;
    cout << "\nPercentage: " << perc << "%\n";
    if (perc < 35)
    {
        cout << "Fail";
    }
    else if (perc > 35 && perc < 49)
    {
        cout << "Third Division";
    }
    else if (perc > 49 && perc < 59)
    {
        cout << "Second Division";
    }
    else
    {
        cout << "First Division";
    }
    return 0;
}