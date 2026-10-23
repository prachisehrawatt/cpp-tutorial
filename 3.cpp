#include <iostream>
using namespace std;

int main() {
    int a[5];
    int f = 1;

    for (int i=1; i<=5; i++) {
        f = f*i;
        a[i-1] = f;
    }

    for (int i=0; i<5; i++) {
        cout << a[i] << endl;
    }

    return 0;
}