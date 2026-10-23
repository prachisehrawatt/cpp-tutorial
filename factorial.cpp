#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, f = 1;
    cin >> n;

    while (i <= n)
    {
        f = f * i;
        i++;
    }

    cout << "Factorial is " << f;

    return 0;
}
