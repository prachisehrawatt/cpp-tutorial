#include <iostream>
using namespace std;

int main()
{
    int a[];
    int leng;

    // user i/p values into array

    leng = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i<leng; i++)
    {
        cout << a[i] << " ";
    }

    cout << "Lenght of array : "<<sizeof(a) / sizeof(a[0]);
    return 0;
}