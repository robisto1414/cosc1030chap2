#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

    double  salary=0.01,total=0,money;
    int mindays, maxdays, count;

    cout << "How many days did you work?"  << endl;
    cin >> maxdays;
    cout << "Money made: " << endl;
    cout << "Days:      Money:" << endl;
    
    if (maxdays<1){
        cout << "Please enter number bigger then 1." << endl;
        cin >> maxdays;
    }

    for ( count = 1; count<=maxdays; count++ ){
        
        cout << count << "      " << salary << endl;
        total= total+salary;
        salary *=2;
    }
cout << "Your toale pay is " << total << "$" << endl;
return 0;
}