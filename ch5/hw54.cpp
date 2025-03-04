#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;
int main(){

int number, large, small;
large = numeric_limits<int>::min();
small = numeric_limits<int>::max();

cout << "Enter a none decimal number. (-99 to end)" << endl;

while (number!=-99) {
    cin >> number;
    if (number>large){
        large = number;
    }
    else if(number<small){
        small=number;
    }
}
cout << "The largest number is: " << large << endl;
cout << "The smallest number is: " << small << endl;
return 0;
}
