#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

    double selection,radius,area,length,width,base,height;

    cout << "Geometry calculator" << "\n"
         << "1. Calculate the area of a circle" << "\n"
         << "2. Calculate the area of a rectangle" << "\n"
         << "3. Calculate Area of a Triangle" << "\n"
         << "4. Quit" << endl;
         cin >> selection;
    if (selection==1){
        cout << "What is radius: " << endl;
        cin >> radius;
        area=3.14159*radius;
        cout << "The area is " << area << "cm3" << endl;
    }
    else if (selection==2){
        cout << "Please enter length: " << endl;
        cin >> length;
        cout << "Please enter width: " << endl;
        cin >> width;
        area=length*width;
        cout << "The are is " << area << "cm3" << endl;
    }
    else if (selection==3){
         cout << "Please enter base: " << endl;
         cin >> base;
         cout << "Please enter height: " << endl;
         cin >> height;
         area=base*height*0.5;
         cout << "The area is " << area << "cm3" << endl;
    }
    else 
    cout << "Invalid entry" << endl;
}
