/*write a c++ program that reads three numbers from the user and prints their sum , 
average an the largest num. find the largest num using the ternary operator and print the three results in a neat row using setw.*/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    float a,b,c,l,sum,avg,largest;

    cout << "enter three numbers: ";
    cin >> a>>b>>c;
    sum = a+b+c;
    avg = sum/3;
    l = max(a,b);
    largest = max(l,c);

    cout << setw(10) << sum 
         << setw(12) << avg
         << setw(15) << largest;

    return 0;
}
