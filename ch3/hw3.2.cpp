// grade 3.5/4

#include <iostream>
#include <string>
using namespace std;
int main()


{

    double loan, insurance, gas, oil, tires, maintenance,annual,monthly;

    // cout << "The following questionaire will determine your monthly and yearly car expenses." << "./n";
    // /n is the wrong way, should be \n. you can include it in the string also, like this:
    cout << "The following questionaire will determine your monthly and yearly car expenses.\n";
    cout << "What is loan payment?" ;
    cin >> loan;
    cout << "What is your insurance cost?" ;
    cin >> insurance;
    cout << "What is your gas cost?";
    cin >> gas;
    cout << "What is your oil cost?";
    cin >> oil;
    cout << "What is your tire cost?"; 
    cin >> tires;
    cout <<  "What is your maintenance cost?";
    cin >> maintenance;
    annual = (loan+insurance+gas+oil+tires+maintenance)*12;
    monthly = loan+insurance+gas+oil+tires+maintenance;
    // cout << "Your monthly cost is $" << monthly << "and annual cost of $" << annual << endl;
    // APL - include spacing to make this read cleaner on output:
    cout << "Your monthly cost is $" << monthly << ", and annual cost of $" << annual << endl;
    return 0;
}
    
