//Hotel Room Pricing Structure

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch(n) {
        case 1:
            cout << "Standard Room - $100/night";
            break;

        case 2:
            cout << "Deluxe Room - $150/night";
            break;

        case 3:
            cout << "Executive Suite - $250/night";
            break;

        case 4:
            cout << "Presidential Suite - $500/night";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}