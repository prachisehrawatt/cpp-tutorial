/*Total Bill Calculator
    - Task: Create a program for a restaurant:
      1. Ask the user for the raw cost of the meal (double).
      2. Ask for the tip percentage as a whole number (e.g., 18 for 18%).
      3. Calculate the tip amount, add it to the meal cost, and print the grand total.
    - Example Input: Meal = 100.00, Tip % = 18
    - Example Output: Your total bill is 118.00*/


#include <iostream>
using namespace std;

int main()
{
    int meal,tip,tax,total_bill;
    float tip_amt;

    cout<< "enter the raw cost of the meal : ";
    cin>>meal;
    cout<< "enter the tip percentage as a whole number : ";
    cin>>tip;
    //cout<<tip<<endl;
    
    // tax calculation
    tax = 0.18 * meal;

    // tip calculation
    tip_amt = (tip/100.0) * meal;
    //cout<<tip_amt<<endl;

    // print all the vaules with grand total.

    cout<<"the meal cost is : "<<meal<<endl;
    cout<<"the tax applied is : "<<tax<<endl;
    cout<<"the tip added is : "<<tip_amt<<endl;

    total_bill= meal+tax+tip_amt;
    cout<<"the total bill is : "<<total_bill<<endl;
    return 0;
}