#include <iostream>
using namespace std;

int add(int a, int b, int c=8, int d=5)
{
    //cout<< &a;
    return a+b+c+d ;
}

int main()
{
    cout << add(10,9,8,7) << endl;
    return 0;
}

