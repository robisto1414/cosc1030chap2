#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <limits>
#include <set>
#include <algorithm>
using namespace std;

class Date{
    private:
    int day,month,year;
    string names[13]={"","January","February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    
    public:
    Date(int x, int y, int z){
        if(x<1 || x>12){
            cout<<"Invalid month"<<endl;
            month=1;
        }
        else{
            month=x;
        }
        if(y<<1||d>31){
            cout<<"INvalid day."<<endl;
        }
        else{
            day=y;
        }
        year=y;
    }
    void first() const{
        cout<<month<<"/"<<day<<"/"<<year<<endl;
    }
    void second() const{
        cout<<names[month]<<" "<< day<<" "<<year<<endl;

    }
    void third() const{
        cout<<day<<" "<<names[month]<<" "<<year<<endl;

    }

};

int main(){
    int day,month,year;

    cout<<"Enter month matching through 1-12:";
    cin>>month;
    cout<<"Enter day of the month: ";
    cin>>day;
    cout<<"Enter current year: ";
    cin>>year;

    Date date(month,day,year);
    cout<<"mm/dd/yyyy= ";
    date.first();
    cout<<"Month dd yyyy= ";
    date.second();
    cout<<"dd Month yyy= ";
    date.third();

    return 0;
}