/*⁠Using grouping switch cases, check if input value from user is a vowel or not.
   (Hint : switch(ch) {case '1': case '2':... } )
*/
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch(ch)
    {
       case 'a': case 'e': 
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
       cout << "vowel !";
    break;

    default:
        cout << "not a vowel !";
    }

    return 0;
}