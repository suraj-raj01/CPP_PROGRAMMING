#include <iostream>
using namespace std;
class Date
{
public:
    string NameOfDay(int day, int month, int year)
    {
        string s = "";
        int arr[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        if (month < 3)
            year -= 1;
        int result = (year + year / 4 - year / 100 + year / 400 + arr[month - 1] + day) % 7;
        switch (result)
        {
        case 1:
            s = "Monday";
            break;
        case 2:
            s = "Tuesday";
            break;
        case 3:
            s = "Wednesday";
            break;
        case 4:
            s = "Thursday";
            break;
        case 5:
            s = "Friday";
            break;
        case 6:
            s = "Saturday";
            break;
        case 0:
        case 7:
            s = "Sunday";
            break;
        default:;
        }
        return s;
    }
};
int main()
{
    int day, month, year;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    Date date = Date();
    string result = date.NameOfDay(day, month, year);
    cout << result;
}