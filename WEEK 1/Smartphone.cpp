// Smartphone Plan Selector

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    switch(ch) {
        case 'A':
        case 'a':
            cout << "5GB Data - $30/month";
            break;

        case 'B':
        case 'b':
            cout << "20GB Data - $50/month";
            break;

        case 'C':
        case 'c':
            cout << "Unlimited Data - $70/month";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}