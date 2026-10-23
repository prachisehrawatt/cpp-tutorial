/*#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i<=4; i++)
    {
    for (int j=1; j<=i; j++)
    {
        cout << j;
    }
        cout << endl;
    }

    return 0;
}*/



#include <iostream>
using namespace std;

int main()
{
    int i=0;
    do 
    {
        int j=0;
     do {
            cout << j;
            j++;
        } 
        
     while (j<=i);
        cout << endl;
        i++;

    }
    while (i<=4);

    return 0;
}