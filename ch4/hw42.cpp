#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()

{
    int month,year;
    
    cout << "Please enter month number:";
    cin >> month;
    cout << "Please enter year:";
    cin >> year;

   if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
   {
    cout << "31 days" << endl;
   }
   else if (month==4 || month==6 || month==9 || month==11)
    {
        cout << "30 days" << endl;
    }
  else if (month==2)
     {
        if ((year % 100 == 0 && year % 400 ==0) || ( year % 4 == 0))
        {
           cout << "This is a leap year 29 days" << endl;
        }
        else 
        {
            cout << "Not a leap year 28 days" << endl;
        }
     }
return 0;
    }