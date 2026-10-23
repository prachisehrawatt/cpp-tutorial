//Countdown to Rocket Launch (Basic)

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter starting number: ";
    cin >> n;

    while (n >= 1) 
    {
        cout << n << " ";
        n--;
    }

    cout << "blastoff !";
    return 0;
}