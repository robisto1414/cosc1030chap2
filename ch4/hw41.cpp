#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()

{
    double seconds, minutes, hours, days;
    
    cout << "Please enter a number of second: " << endl;
    cin >> seconds;
    minutes = seconds/60;
    hours=seconds/3600;
    days=seconds/86400;


    if (seconds>=60 && seconds<3600)
     cout << "There is " << minutes << " minutes" << endl;
    
    else if (seconds>=3600 && seconds<86400)
     cout << "There is " << hours << " hours" << endl;
    
    else if (seconds>=86400)
     cout << "There is " << days << " days" << endl;

    else
     cout << "There is " << seconds << " Seconds" << endl;
    return 0;
}
