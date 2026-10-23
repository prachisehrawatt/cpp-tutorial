#include <iostream>
using namespace std;

int swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;

    return 0;
}

int main()
{
    int x=5, y=10;

    swap(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}