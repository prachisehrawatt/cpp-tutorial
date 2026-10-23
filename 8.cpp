/*⁠ ⁠Ask user to input a number, then ask user to calculate sqr or cube or the number.
Once calculated, check with user to repeat until the user says stop (Y/N).
*/

#include <iostream>
using namespace std;

int main()
{
    int n,ch;
    char a;

    do
    
    {

        cout << "enter the number : ";
        cin >> n;

        cout << "1. Square\n 2. Cube\n";
        cin >> ch; 

        if (ch == 1)
            cout << "square = " << n*n << endl;
        else
            cout << "cube = " << n*n*n << endl;

        cout << "want to repeat? (Y/N) : ";
        cin >> a;

    }
    
    while (a == 'Y' || a == 'y');

    return 0;
}