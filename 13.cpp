#include <iostream>
using namespace std;

void sum(int &a)
{
    a= a+5;
}

int main(){
    int a = 10;
    cout << a << endl ;
    sum(a);
    cout << a << endl ;
    return 0;
}