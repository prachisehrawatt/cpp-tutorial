/*Day of the Week Indicator

• Problem: Take an integer from 1 to 7 as input. Print the corresponding day of the week, where 1 is Monday, 2 is Tuesday, and so on. Use the default case to catch any numbers outside the 1–7 range.
• Input: 3 → Output: Wednesday
• Input: 9 → Output: Invalid day number*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter day number : ";
    cin >> n;

    switch (n) 
    {
        case 1:
        cout << "monday";
        break;
        case 2:
        cout << "tuesday";
        break;
        case 3:
        cout << "wednesday";
        break;
        case 4:
        cout << "thursday";
        break;
        case 5:
        cout << "friday";
        break;
        case 6:
        cout << "saturday";
        break;
        case 7:
        cout << "sunday";
        break;
        default: cout << "invalid day ! enter number btw 1-7 :) ";
    }

    return 0;
}