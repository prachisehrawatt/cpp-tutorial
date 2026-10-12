#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "enter the grade : ";
    cin >> grade;

    switch(grade)
    {
case 'a' : 
cout << "this is grade a !";
break;
case 'b' : 
cout << "this is grade b!";
break;
case 'c' : 
cout << "this is grade c !";
break;
default:
cout << "invalid !";
break;
    }

    if (grade == 'a')
    {
        cout << "grade a";
    }

    else if (grade == 'b')
    {
        cout << "grade b";
    }

    else
    {
        cout << "invalid";
    }

    return 0;
}