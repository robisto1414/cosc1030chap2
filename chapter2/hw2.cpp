// grade 3.5/4

#include <iostream>
using namespace std;
int main()

{
    double mealcost = 88.67, taxamount, tipamount, totalcost;
    taxamount = 88.67*6.75/100;
    tipamount= 88.67*20/100;
    totalcost = taxamount+tipamount+mealcost;
    cout << "Total meal=" << totalcost << "Tip=" << tipamount << "Tax=" << taxamount << endl;

    // APL Make sure to at least put spaces, if not new lines:
    cout << "Total meal=" << totalcost << ", Tip=" << tipamount << ", Tax=" << taxamount << endl;

return 0;
}