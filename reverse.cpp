/*
Problem Statement:
Write a C++ program that asks the user to enter an integer. Use a while loop to reverse the digits of that number and print the reversed result.
Input : 12345
Output : 54321


#include <iostream>
using namespace std;

int main()
{
    int num, reverse_num, remainder;
    reverse_num = 0;

    cout << " Enter the number : ";
    cin >> num;

    while (num != 0)  // run until num is not 0
    {
        remainder = num % 10;
        reverse_num = (reverse_num * 10) + remainder;
        num = num / 10;
    }

    cout << reverse_num;

    return 0;
}*/




#include <iostream>
using namespace std;

int main()
{
    int num, reverse_num = 0, rem;

    cout << "rnter a number : ";
    cin >> num;

    do {
        rem = num%10;
        reverse_num = (reverse_num*10) + rem;
        num = num/10;
    } while (num != 0);

    cout << "reversed number : " << reverse_num;

    return 0;
}