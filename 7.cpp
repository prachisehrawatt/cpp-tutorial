#include <iostream>
using namespace std;

int main()
{
    int count = 10;
    for (int i=4; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
    {
            cout << count<<" ";
            count--;
    }
        cout << endl;
    }
    return 0;
}
    