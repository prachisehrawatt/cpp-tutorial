#include <iostream>
using namespace std;

int sqqrt() {
    int a=5;
    int fact=1;

    for (int i=1; i<=a; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int x = sqqrt();
    cout << x;
    return 0;
}