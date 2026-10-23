
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int s, h, m, sec;

    cout << " enter secs : ";
    cin >> s;

    h = s / 3600;
    m = (s%3600)/60;
    sec = s%60;

    cout << setw(10) << "total hrs"
         << setw(10) << "total mins"
         << setw(10) << "total secs" << endl;

    cout << setw(10) << h
         << setw(10) << m
         << setw(10) << sec;

    return 0;
}
