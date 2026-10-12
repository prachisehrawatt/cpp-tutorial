/*Currency Converter
   - Task: Ask the user for an amount in INR (decimal value) and print out the equivalent amount in USD AND EUR. Assume 1 USD = 0.92 EUR.
   - Example Input: 10.50
   - Example Output: 10.50 USD is equal to 9.66 EUR.
*/

#include <iostream>
using namespace std;

int main()
{
    float inr_amt,usd_amt,eur_amt;
    cout<<" enter the inr_amt : ";
    cin>>inr_amt;
    usd_amt = inr_amt / 83;
    eur_amt = usd_amt * 0.92;

    cout<<"the amount converted to usd: "<<usd_amt<<endl;
    cout<<"the amount converted to eur: "<<eur_amt<<endl;
}


