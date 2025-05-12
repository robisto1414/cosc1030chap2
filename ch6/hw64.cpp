#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
using namespace std;

double futurevalue( double presentvalue, double intrate, int months){
    double finalvalue = presentvalue*pow(1+intrate,months);
    return finalvalue;
}

int main(){
    double presentvalue,finalvalue,intrate;
    int months;

    cout << "Enter your current totale of your account."<< endl;
    cin >> presentvalue;
    cout <<"Enter your monthly intrestest rate."<<endl;
    cin >> intrate;
    cout << "Enter the number of months." <<endl;
    cin >> months; // APL added
    finalvalue=futurevalue(presentvalue, intrate, months);
    cout << "The final value of your account is " << finalvalue << "$" << endl;
    return 0;

}