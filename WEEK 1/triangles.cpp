/*Triangle Validity and Type

Problem: Take three integers as input representing the lengths of three sides of a triangle. First, check if the sides can form a valid triangle (the sum of any two sides must be strictly greater than the third side). If valid, classify the triangle as:
• "Equilateral" (all three sides are equal)
• "Isosceles" (exactly two sides are equal)
• "Scalene" (all sides are different)
• If the sides cannot form a triangle, print "Invalid Triangle".*/

#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3;
    cout << "Enter the value for side 1 : ";
    cin >> s1;

    cout << "Enter the value for side 2 : ";
    cin >> s2;

    cout << "Enter the value for side 3 : ";
    cin >> s3;

    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2)){
        
        if (s1 == s2  && s1 == s3)
        {
            cout <<"Equilateral Triangle";
        }

        else if ((s1 == s2) || (s1 == s3) || (s2 == s3))
            {
            cout << "Isoceles Triangle";
            }
        else
        {
            cout <<"Scalene Triangle";
        }
        
        }
    else
    {
        cout <<"Invalid Triangle !!";
    }
    return 0;
}