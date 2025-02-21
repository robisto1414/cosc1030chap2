#include <iostream> 
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double calories,fatcals,percent,fat;
    
        
    cout << "Please enter amount of calories" << endl;
    cin >> calories;
    cout << "Please enter amount of grams of fat" << endl;
    cin >> fat;
    fatcals=fat*9;
    percent=(fatcals/calories);
   
    if (calories>0 && fat>0){
        if (percent<30){
    cout << "The percentage of fat calories are: "<< percent << endl;
    cout << "This food is low in fat" << endl;
    }
    else {
        cout << "The percentage of fat calories are: " << percent << endl;
    }
}
    else {
        cout << "Invalid entry please try again" << endl;
    

    }

    
}

